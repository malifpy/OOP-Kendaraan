#ifndef __MOBIL_H__
#define __MOBIL_H__

#include "Kendaraan.hpp"
#include <string>

class Mobil : public Kendaraan {
    private:
        std::string supir;
    public:
        Mobil();
        Mobil(int nomorK, std::string merk, int tk, std::string supir);
        Mobil(const Mobil& K);
        ~Mobil();
        int biayaSewa(int lamaSewa) override;
        void printInfo() override;

};

#endif