#include "include/pemasukan.hpp"

Pemasukan::Pemasukan(int n, std::string d){
    nilai = n;
    deskripsi = d;
}

void Pemasukan::print() {
    std::cout<<"Pemasukan : "<<nilai<<std::endl;
    std::cout<<"Deskripsi : "<<deskripsi<<std::endl;
    std::cout<<std::endl;
}
