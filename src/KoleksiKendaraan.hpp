#ifndef __KOLEKSI_KENDARAAN_H__
#define __KOLEKSI_KENDARAAN_H__
#define DEFAULT_SIZE 100

#include "Kendaraan.hpp"

class KoleksiKendaraan {
    private:
        Kendaraan** AoK;
        int nEff;
        int size;
    public:
        KoleksiKendaraan();
        KoleksiKendaraan(int sz);
        KoleksiKendaraan(const KoleksiKendaraan& obj);
        ~KoleksiKendaraan();
        void printAll();
        void operator<<(Kendaraan& K);
        void operator<<(KoleksiKendaraan& KK);
};

#endif