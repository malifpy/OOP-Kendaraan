#ifndef __MINIBUS_H__
#define __MINIBUS_H__

#include "Kendaraan.hpp"

class Minibus : public Kendaraan {
    public:
        Minibus();
        Minibus(int nomorK, std::string merk, int tk );
        Minibus(const Minibus& K);
        ~Minibus();
        int biayaSewa(int lamaSewa) override;
        float diskon(int lamaSewa);
};

#endif
