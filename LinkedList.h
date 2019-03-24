#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<class T>
class LinkedList{
    private:
        int n;
        T * data;
    public:
        LinkedList(){
            n = 0;
            data = new T[n];
        }
        LinkedList(int _n){
            n = _n;
            data = new T[n];
        }
        LinkedList(const LinkedList<T>& LL){
            n = LL.n;
            data = new T[n];
            for(int i = 0; i < n; i++){
                data[i] = LL.data[i];
            }
        }
        ~LinkedList(){
            delete [] data;
        }
        /**
         * Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
         * @param element elemen yang ingin dicari dari linked list
         * @return index elemen, -1 jika tidak ada
         */
        int find(const T& element){
            if (n != 0){
                int i = 0;
                while(i<n-1 && data[i]!=element){
                    i++;
                }
                if (data[i] == element)
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
            T *newData = new T[n+1];
            for(int i = 0; i < n; i++){
                newData[i] = data[i];
            }
            newData[n++] = element;
            delete [] data;
            data = newData;
        }
        /**
         * Membuang elemen dari linked list. Elemen diasumsikan unik
         * @param elemen yang akan dibuang dari linked list
         */
        void remove(const T element){
            if (!isEmpty() && find(element) != -1){
                bool found = false;
                int i,j;
                T *newData = new T[n-1];
                for(i = 0, j = 0; i < n; i++){
                    if (!(data[i] == element) || found){
                        newData[j++] = data[i];
                    }else{
                        found = true;
                    }
                }
                delete [] data;
                data = newData;
                n--;
            }
        }
        /**
         * Mengembalikan elemen pada indeks
         * @param index index dari data yang diinginkan
         * @return objek pada index ke-index
         */
        T& get(int index){
            return data[index];
        }
};

#endif
