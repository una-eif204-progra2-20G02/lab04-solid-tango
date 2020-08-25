//
// Created by mendo on 24/8/2020.
//

#include "Transmision.h"

Transmision::Transmision(string nombre, double precio, double tax): Game(nombre, precio, tax) {}
Transmision::~Transmision() {}

string Transmision::reemplazo() {
    return " Este producto tendra un reemplazo ";
}