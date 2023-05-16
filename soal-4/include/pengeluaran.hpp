#ifndef _PENGELUARAN
#define _PENGELUARAN

#include <iostream>

class Pengeluaran {
    public:
        long int nilai;
        std::string deskripsi;
        Pengeluaran(long int n, std::string d);
        void print();
};

#endif 


