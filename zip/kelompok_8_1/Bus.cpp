#include "Bus.hpp"
#include <iostream>
#include <ostream>

Bus::Bus() : Kendaraan() {
    this->kapasitas = 0;
}

Bus::Bus(int nomorK, std::string merk, int tk, int cap) : Kendaraan(nomorK, "Bus", merk, tk){
    this->kapasitas = cap;
}

Bus::Bus(const Bus& K) : Kendaraan(K){
    this->kapasitas = K.kapasitas;
}

Bus::~Bus(){

}

int Bus::biayaSewa(int lamaSewa){
    return 1000000 * lamaSewa;
}

void Bus::printInfo(){
    this->Kendaraan::printInfo();
    std::cout << "Kapasitas       : " << this->kapasitas << std::endl;
}