#ifndef _PEMASUKKAN
#define _PEMASUKKAN

#include <iostream>

class Pemasukan {
    public:
        int nilai;
        std::string deskripsi;
        Pemasukan(int n, std::string d);\
        void print();
};

#endif 
