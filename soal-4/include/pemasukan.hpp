#ifndef _PEMASUKKAN
#define _PEMASUKKAN

#include <iostream>

class Pemasukan {
    public:
        long int nilai;
        std::string deskripsi;
        Pemasukan(long int n, std::string d);
        void print();
};

#endif 
