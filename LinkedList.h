#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

template <class T>
class ListEl{
    private:
        T data;
        ListEl *nextEl;
    public:
        ListEl(T newel){
            data = newel;
            nextEl = nullptr;
        }

        void setNext(ListEl *_nextEl){
            nextEl = _nextEl;
        }

        ListEl* next(){
            return nextEl;
        }

        void setData(T _data){
            data = _data;
        }

        T& getData(){
            return data;
        }
};

template<class T>
class LinkedList{
    private:
        int n;
        ListEl<T>* first;
    public:
        LinkedList(){
            n = 0;
            first = nullptr;
        }
        LinkedList(const LinkedList<T>& LL){
            n = LL.n;
            if (n > 0){
                first = new ListEl<T> (LL.get(0));
                ListEl<T>* curr = first;
                for(int i = 1; i < n; i++){
                    curr->setNext(new ListEl<T>(LL.get(i)));
                    curr = curr->next();
                }
            }
        }
        /**
         * Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
         * @param element elemen yang ingin dicari dari linked list
         * @return index elemen, -1 jika tidak ada
         */
        int find(const T& element){
            if (n > 0){
                int i = 0;
                ListEl<T>* curr = first;
                while( i < n-1 && !(curr->getData() == element) ){
                    curr = curr->next();
                    i++;
                }
                if (curr->getData() == element)
                    return i;
                else
                    return -1;
            }
        }
        /**
         * Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
         * @param element adalah pointer ke elemen yang ingin dicari dari linked list
         * @return index elemen, -1 jika tidak ada
         */
        int findPointer(const T& element){
            if (n != 0){
                int i = 0;
                ListEl<T>* curr = first;
                while(i<n-1 && !(*(curr->getData())==*element)){
                    curr = curr->next();
                    i++;
                }
                if (*(curr->getData()) == *element)
                    return i;
                else
                    return -1;
            }
        }
        /**
         * Mengembalikan True jika linked list kosong
         * @return apakah linked list kosong
         */
        bool isEmpty(){ return n == 0; }
        /**
         * Mengembalikan panjang linkedlist
         * @return jumlah elemen pada linkedlist
         */
        int length(){ return n; }
        /**
         * Menambahkan elemen sebagai elemen paling akhir
         * @param elemen elemen yang akan ditambahkan pada linked list
         */
        void add(T element){
            if (n > 0){
                ListEl<T>* curr = first;
                for(int i = 1; i < n; i++){
                    curr = curr->next();
                }
                curr->setNext(new ListEl<T>(element));
            }else{
                first = new ListEl<T>(element);;
            }
            n++;
        }
        /**
         * Membuang elemen dari linked list. 
         * Jika dua elemen yang identik, maka hanya element pertama yang dihapus
         * @param elemen yang akan dibuang dari linked list
         */
        void remove(const T& element){
            if (!isEmpty() && find(element) != -1){
                ListEl<T>* curr = first;
                ListEl<T>* prev = nullptr;
                while (!(curr->getData() == element)){
                    prev = curr;
                    curr = curr->next();
                }
                if (prev == nullptr){
                    //First element
                    first = curr->next();
                }else{
                    prev->setNext(curr->next());
                }
                n--;
            }
        }
        /**
         * Mengembalikan elemen pada indeks
         * @param index index dari data yang diinginkan
         * @return objek pada index ke-index
         */
        T& get(int index) const{
            if (index != -1 && index < n){
                ListEl<T>* curr = first;
                for(int i = 0; i < index; i++){
                    curr = curr->next();
                }
                return curr->getData();
            }
        }
        /**
         * Mengosongkan linked list
         */
        void removeAll(){
            if (!isEmpty()){
                n = 0;
                first = nullptr;
            }
        }
};

#endif
