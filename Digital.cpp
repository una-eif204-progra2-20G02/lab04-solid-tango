//
// Created by mendo on 24/8/2020.
//

#include "Digital.h"

Digital::Digital(string name, double price, double tax):
Game(name,price,tax){

}

double Digital::calcularDescuento() {
    return price * 0.15;
}

string Digital::remplazarProducto() {
    return "Este producto tendrá un reemplazo";
}
string Digital::toString() {
    stringstream  s;

    s<<"Precio con descuento: "<<price - calcularDescuento()<<endl;
    return s.str();
}