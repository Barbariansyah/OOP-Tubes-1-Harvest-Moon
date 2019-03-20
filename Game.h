#ifndef GAME_H
#define GAME_H

#include "All.h"
#include <vector>

using namespace std;

/**
 * Kelas Game.
 * Akan diinstansiasikan sebagai sebuah objek yang mengandung semua informasi
 * ataupun method yang mempengaruhi keseluruhan Engi's Farm
 */
class Game {
    private:
        Cell ** map;                /*!< Atribut untuk menyimpan setiap cell*/
        vector<Entity> entities;    /*!< Atribut untuk menyimpan entity yang masih hidup*/
    public:
        /**
         * Konstruktor Game.
         * Menerima nama file untuk kemudian dibaca dan dimuat dalam struktur data game.
         * @param filename nama file eksternal untuk dibaca
         */
        Game(string filename);
        /**
         * Method load game yang akan dipanggil oleh konstruktor.
         * Membaca kondisi permainan dan memuatnya dalam memori.
         * @param filename nama file eksternal untuk dibaca
         */
        void LoadGame(string filename);
        /**
         * Method save game untuk menyimpan kondisi permainan ke file eksternal.
         * @param filename nama file eksternal yang akan diisi kondisi permainan
         */
        void SaveGame(string filename);
        /**
         * Method tick untuk menggerakan tick permainan.
         * Method ini akan memanggil semua method pada elemen map maupun entities yang
         * berhubungan dengan game tick.
         */
        void Tick();
        /**
         * Method draw screen mencetak kondisi permainan.
         * Method ini memanfaatkan method virtual render dari kelas renderer yang
         * diturunkan pada semua kelas selain produk.
         */
        void DrawScreen();
};

#endif