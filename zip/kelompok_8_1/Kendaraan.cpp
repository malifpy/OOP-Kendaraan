#include "Kendaraan.hpp"
#include <iostream>
#include <ostream>

Kendaraan::Kendaraan(){
    this->nk = 0;
    this->tk = 0;
    this->merk = "XXX";
    this->kategori = "mobil";
}

Kendaraan::Kendaraan(int nomorK, std::string cat, std::string merk, int tk ){
    this->nk = nomorK;
    this->tk = tk;
    this->merk = merk;
    this->kategori = cat;
}

Kendaraan::Kendaraan(const Kendaraan& K){
    this->nk = K.nk;
    this->tk = K.tk;
    this->kategori = K.kategori;
    this->merk = K.merk;
}

Kendaraan::~Kendaraan(){

}

void Kendaraan::printInfo(){
    std::cout << 
        "Nomor Kendaraan : " << this->nk << std::endl <<
        "Kategori        : " << this->kategori << std::endl <<
        "Merk            : " << this->merk << std::endl << 
        "Tahun Keluar    : " << this->tk << std::endl;
}

int Kendaraan::biayaSewa(int lamaSewa){
    if(this->kategori == "Bus"){
        return 1000000 * lamaSewa;
    } else if (this->kategori == "Minibus"){
        if(lamaSewa <= 5){
            return 5000000;
        } else {
            return 5000000 + 500000 * (lamaSewa - 5);
        }
    } else if(this->kategori == "Mobil"){
        return 500000 * lamaSewa;
    } else {
        return 0;
    }
}