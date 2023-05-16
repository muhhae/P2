#include "include/pengeluaran.hpp"

Pengeluaran::Pengeluaran(int n, std::string d){
    nilai = n;
    deskripsi = d;
}

void Pengeluaran::print() {
    std::cout<<"Pengeluaran : "<<nilai<<std::endl;
    std::cout<<"Deskripsi : "<<deskripsi<<std::endl;
    std::cout<<std::endl;
}