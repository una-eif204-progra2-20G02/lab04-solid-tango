//
// Created by mendo on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H
#include <iostream>
#include "Game.h"
using namespace std;

class Digital: public Game {
    Digital(string , double , double);

    double calcularDescuento();

    string remplazarProducto();
    string toString() ;
};


#endif //LAB04_SOLID_DIGITAL_H
