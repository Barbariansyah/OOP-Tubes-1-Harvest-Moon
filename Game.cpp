#include "Game.h"

Land *** Game::landmap;            
Entity *** Game::entitymap;        
LinkedList<FarmAnimal*> Game::animals; 
Truck Game::truck(0,0);
Well Game::well(0,0);
Mixer Game::mixer(0,0);
Player Game::player;
int Game::nBaris,Game::nKolom; 

/**
 * Initialize Game.
 * Menerima nama file untuk kemudian dibaca dan dimuat dalam struktur data game.
 * @param filename nama file eksternal untuk dibaca
 */
void Game::Initialize(string filename){
    nBaris = 10;
    nKolom = 13;

    landmap = new Land**[nBaris];
    entitymap = new Entity**[nBaris];
    for(int i = 0; i < nBaris; i++){
        landmap[i] = new Land*[nKolom];
        entitymap[i] = new Entity*[nKolom];
        for(int j = 0; j < nKolom; j++){
            landmap[i][j] = new Grassland();
            entitymap[i][j] = nullptr;
        }
    }
}
/**
 * Method load game yang akan dipanggil oleh konstruktor.
 * Membaca kondisi permainan dan memuatnya dalam memori.
 * @param filename nama file eksternal untuk dibaca
 */
void Game::LoadGame(string filename){
    // open a file in read mode.
    string line;
    ifstream infile; 
    infile.open(filename); 
    
    int i = 0;
    while (getline(infile,line)){
        for(int j = 0; j < line.length(); j++){
            if (line[j] == '-'){
                landmap[i][j] = new Grassland();
                landmap[i][j]->GrowGrass();
            }
            else if (line[j] == 'O'){
                landmap[i][j] = new Coop();
                landmap[i][j]->GrowGrass();
            }
            else if (line[j] == 'X'){
                landmap[i][j] = new Barn();
                landmap[i][j]->GrowGrass();
            }
            else if (line[j] == '#'){
                landmap[i][j] = new Grassland();
                landmap[i][j]->GrowGrass();
            }
            else if (line[j] == '*'){
                landmap[i][j] = new Coop();
                landmap[i][j]->GrowGrass();
            }
            else if (line[j] == '@'){
                landmap[i][j] = new Barn();
                landmap[i][j]->GrowGrass();
            }
            else if (line[j] == 'P'){
                player = Player("No Name",5,0,i,j);
                entitymap[i][j] = &player;
            }
            else if (line[j] == 'M'){
                mixer = Mixer(i,j);
                entitymap[i][j] = &mixer;
            }
            else if (line[j] == 'W'){
                well = Well(i,j);
                entitymap[i][j] = &well;
            }
            else if (line[j] == 'T'){
                truck = Truck(i,j);
                entitymap[i][j] = &truck;
            }
            else if (line[j] == 'C'){
                animals.add(new Chicken(i,j));
                landmap[i][j] = new Coop();
                entitymap[i][j] = animals.get(animals.length()-1);
            }
            else if (line[j] == 'S'){
                animals.add(new Cow(i,j));
                landmap[i][j] = new Grassland();
                entitymap[i][j] = animals.get(animals.length()-1);
            }
            else if (line[j] =='U'){
                animals.add(new Dino(i,j));
                landmap[i][j] = new Coop();
                entitymap[i][j] = animals.get(animals.length()-1);
            }else if (line[j] == 'D'){
                animals.add(new Duck(i,j));
                landmap[i][j] = new Coop();
                entitymap[i][j] = animals.get(animals.length()-1);
            }else if (line[j] == 'G'){
                animals.add(new Goat(i,j));
                landmap[i][j] = new Grassland();
                entitymap[i][j] = animals.get(animals.length()-1);
            }else if (line[j] == 'R'){
                animals.add(new Rabbit(i,j));
                landmap[i][j] = new Barn();
                entitymap[i][j] = animals.get(animals.length()-1);
            }
        }
        i++;
    }

    // close the opened file.
    infile.close();
}
/**
 * Method save game untuk menyimpan kondisi permainan ke file eksternal.
 * @param filename nama file eksternal yang akan diisi kondisi permainan
 */
void Game::SaveGame(string filename){
    //TODO
}
/**
 * Method tick untuk menggerakan tick permainan.
 * Method ini akan memanggil semua method pada elemen map maupun entities yang
 * berhubungan dengan game tick.
 */
void Game::Tick(){
    //Menerima input command
    string cmd;
    cout << "> ";
    cin >> cmd;
    if (cmd == "MOVE") {
        player.Move();
    }else if (cmd == "INTERACT") {
        player.Interact();
    }else if (cmd == "GROW") {
        player.Grow();
    }else if (cmd == "TALK") {
        player.Talk();
    }else if (cmd == "STATUS") {
        player.PrintStatus();
    }else if (cmd == "KILL") {
        player.Kill();
    }else if (cmd == "MIX") {
        player.Mix();
    }

    //Menggerakan semua animal dan mengupdate kondisinya
    for(int i = 0; i < animals.length(); i++){
        FarmAnimal* animal = animals.get(i);
        if (animal->GetHungerCountdown() <= -5){
            animals.remove(animal);
            setEntity(animal->GetX(),animal->GetY(),nullptr);
        }else{
            animal->ReduceHungerCountdown();
            animal->Move();
            animal->Eat();
        }
    }

    //Mengubah away counter truck
    truck.TickTruck();
}
/**
 * Method draw screen mencetak kondisi permainan.
 * Method ini memanfaatkan method virtual render dari kelas renderer yang
 * diturunkan pada semua kelas selain produk.
 */
void Game::DrawScreen(){
    for(int i = 0; i < nBaris; i++){
        for(int j = 0; j < nKolom; j++){
            if (entitymap[i][j]){
                cout << entitymap[i][j]->Render();
            }else{
                cout << landmap[i][j]->Render();
            }
        }
        cout << endl;
    }
}
/**
 * Method untuk mengakses land pada posisi x, y.
 * @param x posisi x land, dimulai dari 0, harus selalu valid
 * @param y posisi y land, dimulai dari 0, harus selalu valid
 * @return objek land pada posisi x, y
 */
Land& Game::getLand(int x, int y){
    return *(landmap[x][y]);
}
/**
 * Method untuk menentukan apakah posisi x, y ada dalam map.
 * @param x , dimulai dari 0
 * @param y , dimulai dari 0
 * @return apakah posisi x, y valid
 */
bool Game::isValidPosition(int x, int y){
    return (x >= 0 && y >= 0 && x < nBaris && y < nKolom);
}
/**
 * Method untuk menentukan apakah ada entity di posisi x, y
 * @param x posisi x untuk ditentukan apakah terdapat entity, dimulai dari 0
 * @param y posisi y untuk ditentukan apakah terdapat entity, dimulai dari 0
 * @return apakah posisi x,y terdapat entity
 */
bool Game::isValidEntity(int x, int y){
    return entitymap[x][y] != nullptr;
}
/**
 * Method untuk mengakses entity pada posisi x, y.
 * @param x posisi x entity, dimulai dari 0, harus selalu dalam ukuran map
 * @param y posisi y entity, dimulai dari 0, harus selalu dalam ukuran map
 * @return objek entity pada posisi x, y. Null jika tidak ada
 */
Entity& Game::getEntity(int x, int y){
    return *(entitymap[x][y]);
}
/**
 * Method untuk mengubah entitymap pada posisi x,y menjadi pointer entity E.
 * @param x posisi x entity, dimulai dari 0, harus selalu dalam ukuran map
 * @param y posisi y entity, dimulai dari 0, harus selalu dalam ukuran map
 * @param E pointer entity, nullptr jika tidak ada
 * @return objek entity pada posisi x, y
 */
void Game::setEntity(int x, int y, Entity* E){
    entitymap[x][y] = E;
}

bool isAdjacent(int x1, int y1, int x2, int y2){
    return ((x2 == x1+1 || x2 == x1-1) && y2 == y1) || ((y2 == y1+1 || y2 == y1-1) && x2 == x1);
}
/**
 * Method untuk mengakses farmanimal yang memiliki posisi x,y.
 * @param x posisi x farmanimal, dimulai dari 0 
 * @param y posisi y farmanimal, dimulai dari 0
 * @return objek farmanimal pada posisi x, y. Null jika tidak ada
 */
FarmAnimal& Game::getAnimal(int x, int y){
    for(int i = 0; i < animals.length(); i++){
        if (animals.get(i)->GetX() == x && animals.get(i)->GetY() == y){
            return *(animals.get(i));
        }
    }
    throw "No animal at the desired location";
}
/**
 * Method untuk mengakses instans truck jika berada di dekat posisi x,y.
 * @param x posisi x akses, digunakan untuk menentukan apakah berada di dekat truck 
 * @param y posisi y akses, digunakan untuk menentukan apakah berada di dekat truck
 * @return objek truck pada jika berada di dekat x,y. throws exception jika tidak berada di dekat x,y
 */
Truck& Game::getTruck(int x, int y){
    if (isAdjacent(x,y,truck.GetX(),truck.GetY()))
        return truck;
    else
        throw "Truck is not nearby";
}
/**
 * Method untuk mengakses instans well jika berada di dekat posisi x,y.
 * @param x posisi x akses, digunakan untuk menentukan apakah berada di dekat well 
 * @param y posisi y akses, digunakan untuk menentukan apakah berada di dekat well
 * @return objek well pada jika berada di dekat x,y. throws exception jika tidak berada di dekat x,y
 */
Well& Game::getWell(int x, int y){
    if (isAdjacent(x,y,well.GetX(),well.GetY()))
        return well;
    else
        throw "Well is not nearby";
}
/**
 * Method untuk mengakses instans mixer jika berada di dekat posisi x,y.
 * @param x posisi x akses, digunakan untuk menentukan apakah berada di dekat mixer 
 * @param y posisi y akses, digunakan untuk menentukan apakah berada di dekat mixer
 * @return objek mixer pada jika berada di dekat x,y. throws exception jika tidak berada di dekat x,y
 */
Mixer& Game::getMixer(int x, int y){
    if (isAdjacent(x,y,mixer.GetX(),mixer.GetY()))
        return mixer;
    else
        throw "Mixer is not nearby";
}
/**
 * Method untuk mengakses instans player
 * @return objek player
 */
Player& Game::getPlayer(){
    return player;
}