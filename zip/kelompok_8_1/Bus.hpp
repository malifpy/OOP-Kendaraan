#ifndef __BUS_H__
#define __BUS_H__

#include "Kendaraan.hpp"

class Bus : public Kendaraan {
    private:
        int kapasitas;
    public:
        Bus();
        Bus(int nomorK, std::string merk, int tk, int cap);
        Bus(const Bus& K);
        ~Bus();
        int biayaSewa(int lamaSewa) override;
        void printInfo() override;
};

#endif
