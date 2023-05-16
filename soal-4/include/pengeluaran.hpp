#ifndef _PENGELUARAN
#define _PENGELUARAN

#include <iostream>

class Pengeluaran {
    public:
        int nilai;
        std::string deskripsi;
        Pengeluaran(int n, std::string d);
        void print();
};

#endif 


