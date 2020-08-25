//
// Created by mendo on 24/8/2020.
//

#include "DigitalGame.h"

DigitalGame::DigitalGame(string name, double price, double tax):
Game(name,price,tax){

}

double DigitalGame::calcularDescuento() {
    return price * 0.15;
}

string DigitalGame::remplazarProducto() {
    return "Este producto tendrá un reemplazo";
}
string DigitalGame::toString() {
    stringstream  s;

    s<<"Precio con descuento: "<<price - calcularDescuento()<<endl;
    return s.str();
}