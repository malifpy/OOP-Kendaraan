#include "Mobil.hpp"
#include <iostream>
#include <ostream>

Mobil::Mobil() : Kendaraan() { this->supir = "XXXX"; }

Mobil::Mobil(int nomorK, std::string merk, int tk,
             std::string supir)
    : Kendaraan(nomorK, "Mobil", merk, tk) {
  this->supir = supir;
}

Mobil::Mobil(const Mobil& K) : Kendaraan(K){
    this->supir = K.supir;
}

Mobil::~Mobil(){

}

int Mobil::biayaSewa(int lamaSewa){
  return 500000 * lamaSewa;
}

void Mobil::printInfo(){
  this->Kendaraan::printInfo();
  std::cout << "Supir           : " << this->supir << std::endl;
}