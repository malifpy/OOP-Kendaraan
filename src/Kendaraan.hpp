#ifndef __KENDARAAN_H__
#define __KENDARAAN_H__

#include <string>

class Kendaraan {
    private:
        int nk;             // Nomor Kendaraan
        std::string kategori;
        std::string merk;
        int tk;             // Tahun Keluar
    public:
        Kendaraan();
        Kendaraan(int nomorK, std::string cat, std::string merk, int tk );
        Kendaraan(const Kendaraan& K);
        ~Kendaraan();
        virtual void printInfo();
        virtual int biayaSewa(int lamaSewa) = 0;

};

#endif