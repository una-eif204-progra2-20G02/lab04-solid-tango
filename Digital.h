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

    double descuento();
    string remplazarProducto();
    string toString() override;
};


#endif //LAB04_SOLID_DIGITAL_H
