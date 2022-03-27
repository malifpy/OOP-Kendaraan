#include "Minibus.hpp"
#include <iostream>

Minibus::Minibus() : Kendaraan() {}

Minibus::Minibus(int nomorK, std::string merk, int tk)
    : Kendaraan(nomorK, "Minibus", merk, tk) {}

Minibus::Minibus(const Minibus &K) : Kendaraan(K) {}
Minibus::~Minibus() {}

int Minibus::biayaSewa(int lamaSewa) {
  if (lamaSewa <= 5) {
    return 5000000;
  } else {
    return (5000000 + 500000 * (lamaSewa - 5)) * (1 - this->diskon(lamaSewa));
  }
}

float Minibus::diskon(int lamaSewa) {
  if (lamaSewa > 10) {
    return 0.1;
  } else {
    return 0.0;
  }
}