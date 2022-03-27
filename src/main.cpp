#include "KoleksiKendaraan.hpp"
#include "Mobil.hpp"
#include "Bus.hpp"
#include "Minibus.hpp"
#include <iostream>

int main(){
    KoleksiKendaraan K(11);
    Mobil M1(1, "Chev", 1999, "Alif");
    Bus B1(2, "Gobilani", 1000, 90);
    K << B1;
    K << M1;
    K.printAll();
    return 0;
}