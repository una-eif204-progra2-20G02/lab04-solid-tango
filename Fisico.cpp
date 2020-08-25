//
// Created by mendo on 24/8/2020.
//

#include "Fisico.h"

Fisico::Fisico(string nombre, double precio, double tax, double _itemWeight, string _productDimensions): Game(nombre, precio, tax), itemWeight(_itemWeight), productDimensions(_productDimensions) {

}

Fisico::~Fisico() {}

string Fisico::envio() {
    return "Este Producto tendra un envio ";
}