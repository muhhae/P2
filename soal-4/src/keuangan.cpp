#include <iostream>

#include "include/keuangan.hpp"

Keuangan::Keuangan() {
    totalPemasukan = 0;
    totalPengeluaran = 0;
}

void Keuangan::tambahPemasukan() {
    long int n; std::string d;
    std::cout<<"Jumlah : "; std::cin>> n; std::cin.ignore();
    std::cout<<"Keterangan : "; std::getline(std::cin, d);
    totalPemasukan += n;
    m_pemasukan.push_back(Pemasukan(n, d));
}

void Keuangan::tambahPengeluaran() {
    long int n; std::string d;
    std::cout<<"Jumlah : "; std::cin>> n; std::cin.ignore();
    std::cout<<"Keterangan : "; std::getline(std::cin, d);
    totalPengeluaran += n;
    m_pengeluaran.push_back(Pengeluaran(n, d));
}

void Keuangan::hitungSaldo() {
    std::cout<<"\nSaldo : "<<totalPemasukan - totalPengeluaran<<"\n"<<std::endl; 
}

void Keuangan::outPemasukan() {
    for (int i = 0; i < m_pemasukan.size(); i++)
    {
        m_pemasukan[i].print();
    }
}

void Keuangan::outPengeluaran() {
    for (int i = 0; i < m_pengeluaran.size(); i++)
    {
        m_pengeluaran[i].print();
    }
}