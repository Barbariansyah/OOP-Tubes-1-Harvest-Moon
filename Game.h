#ifndef GAME_H
#define GAME_H

#include "All.h"

using namespace std;

/**
 * Kelas Game.
 * Akan diinstansiasikan sebagai sebuah objek yang mengandung semua informasi
 * ataupun method yang mempengaruhi keseluruhan Engi's Farm
 */
class Game {
    private:
        static Land *** landmap;            /*!< Atribut untuk menyimpan setiap land*/
        static Entity *** entitymap;        /*!< Atribut untuk menyimpan entity posisi entity untuk keperluan move*/
        static LinkedList<FarmAnimal*> animals; /*!< Atribut untuk interaksi dengan farm animal */
        static Truck truck;
        static Well well;
        static Mixer mixer;
        static int nBaris,nKolom;
        Game(){}                           /*!< Menandakan Game adalah kelas statik sehingga tidak dapat diinstantiasi*/
    public:
        /**
         * Initialize Game.
         * Menerima nama file untuk kemudian dibaca dan dimuat dalam struktur data game.
         * @param filename nama file eksternal untuk dibaca
         */
        static void Initialize(string filename);
        /**
         * Method load game yang akan dipanggil oleh konstruktor.
         * Membaca kondisi permainan dan memuatnya dalam memori.
         * @param filename nama file eksternal untuk dibaca
         */
        static void LoadGame(string filename);
        /**
         * Method save game untuk menyimpan kondisi permainan ke file eksternal.
         * @param filename nama file eksternal yang akan diisi kondisi permainan
         */
        static void SaveGame(string filename);
        /**
         * Method tick untuk menggerakan tick permainan.
         * Method ini akan memanggil semua method pada elemen map maupun entities yang
         * berhubungan dengan game tick.
         */
        static void Tick();
        /**
         * Method draw screen mencetak kondisi permainan.
         * Method ini memanfaatkan method virtual render dari kelas renderer yang
         * diturunkan pada semua kelas selain produk.
         */
        static void DrawScreen();
        /**
         * Method untuk mengakses land pada posisi x, y.
         * @param x posisi x land, dimulai dari 0, harus selalu valid
         * @param y posisi y land, dimulai dari 0, harus selalu valid
         * @return objek land pada posisi x, y
         */
        static Land& getLand(int x, int y);
        /**
         * Method untuk menentukan apakah ada entity di atas/bawah/kanan/kiri posisi x, y
         * @param x posisi x untuk ditentukan apakah dekat entity, dimulai dari 0, harus selalu dalam ukuran map
         * @param y posisi y untuk ditentukan apakah dekat entity, dimulai dari 0, harus selalu dalam ukuran map
         * @return apakah posisi x,y berada di dekat entity
         */
        static bool isNearEntity(int x, int y);
        /**
         * Method untuk mengakses entity pada posisi x, y.
         * @param x posisi x entity, dimulai dari 0, harus selalu dalam ukuran map
         * @param y posisi y entity, dimulai dari 0, harus selalu dalam ukuran map
         * @return objek entity pada posisi x, y. Null jika tidak ada
         */
        static Entity& getEntity(int x, int y);
        /**
         * Method untuk mengakses farmanimal yang memiliki posisi x,y.
         * @param x posisi x farmanimal, dimulai dari 0 
         * @param y posisi y farmanimal, dimulai dari 0
         * @return objek farmanimal pada posisi x, y. Null jika tidak ada
         */
        static FarmAnimal& getAnimal(int x, int y);
        /**
         * Method untuk mengakses instans truck jika berada di dekat posisi x,y.
         * @param x posisi x akses, digunakan untuk menentukan apakah berada di dekat truck 
         * @param y posisi y akses, digunakan untuk menentukan apakah berada di dekat truck
         * @return objek truck pada jika berada di dekat x,y. Null jika tidak berada di dekat x,y
         */
        static Truck& getTruck(int x, int y);
        /**
         * Method untuk mengakses instans well jika berada di dekat posisi x,y.
         * @param x posisi x akses, digunakan untuk menentukan apakah berada di dekat well 
         * @param y posisi y akses, digunakan untuk menentukan apakah berada di dekat well
         * @return objek well pada jika berada di dekat x,y. Null jika tidak berada di dekat x,y
         */
        static Well& getWell(int x, int y);
        /**
         * Method untuk mengakses instans mixer jika berada di dekat posisi x,y.
         * @param x posisi x akses, digunakan untuk menentukan apakah berada di dekat mixer 
         * @param y posisi y akses, digunakan untuk menentukan apakah berada di dekat mixer
         * @return objek mixer pada jika berada di dekat x,y. Null jika tidak berada di dekat x,y
         */
        static Mixer& getMixer(int x, int y);
};

#endif