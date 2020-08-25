//
// Created by mendo on 24/8/2020.
//

#include "PhysicalGame.h"

PhysicalGame::PhysicalGame(string nombre, double precio, double tax, double _itemWeight, string _productDimensions): Game(nombre, precio, tax), itemWeight(_itemWeight), productDimensions(_productDimensions) {

}

PhysicalGame::~PhysicalGame() {}

string PhysicalGame::envio() {
    return "Este Producto tendra un envio ";
}

string PhysicalGame::toString() {
    stringstream s;
    s << "Item Weight: "<<itemWeight<<endl;
    s << "Product Dimensions: "<<productDimensions<<endl;
    return s.str();
}