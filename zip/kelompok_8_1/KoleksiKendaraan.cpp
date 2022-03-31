#include "KoleksiKendaraan.hpp"
#include <iostream>
#include <ostream>

KoleksiKendaraan::KoleksiKendaraan(){
    this->AoK = new Kendaraan*[DEFAULT_SIZE];
    this->nEff = 0;
    this->size = DEFAULT_SIZE;
}

KoleksiKendaraan::KoleksiKendaraan(int sz){
    this->AoK = new Kendaraan*[sz];
    this->nEff = 0;
    this->size = sz;
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& KK){
    this->AoK = new Kendaraan*[KK.size];
    for(int i = 0; i < KK.nEff; i++){
        this->AoK[i] = KK.AoK[i];
    }
    this->size = KK.size;
    this->nEff = KK.nEff;
}

KoleksiKendaraan::~KoleksiKendaraan(){
    delete [] this->AoK;
}

void KoleksiKendaraan::printAll(){
    std::cout << "### INFO KENDARAAN ###" << std::endl;
    for(int i = 0; i < this->nEff; i++){
        std::cout << std::endl;
        this->AoK[i]->printInfo();
    }
}
void KoleksiKendaraan::operator<<(Kendaraan& K){
    if(this->nEff < this->size){
        this->AoK[this->nEff] = &K;
        this->nEff++;
    }
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan& KK){
    for(int i = 0; this->nEff < this->size; i++){
        *this << *KK.AoK[i];
    }
}