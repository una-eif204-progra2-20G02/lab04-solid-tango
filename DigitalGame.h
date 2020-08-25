//
// Created by mendo on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H
#include <iostream>
#include "Game.h"
using namespace std;

class DigitalGame: public Game {
    DigitalGame(string , double , double);

    double calcularDescuento();

    string remplazarProducto();
    string toString() ;
};


#endif //LAB04_SOLID_DIGITALGAME_H
