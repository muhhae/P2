#ifndef _KEUANGAN
#define _KEUANGAN

#include <vector>
#include <iostream>
#include <conio.h>

#include "include/pemasukan.hpp"
#include "include/pengeluaran.hpp"

class Keuangan {
    private:
        long int totalPemasukan;
        long int totalPengeluaran;
        std::vector<Pemasukan> m_pemasukan;
        std::vector<Pengeluaran> m_pengeluaran;

    public:
        Keuangan();
        void tambahPemasukan();
        void tambahPengeluaran();
        void hitungSaldo();
        void outPengeluaran();
        void outPemasukan();
};

#endif 