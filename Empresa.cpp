

#include "Empresa.h"

Empresa::Empresa(){name="Sin Definir";}




void Empresa::setName(string name){this->name=name;}
string Empresa::getName() {return name;}

string Empresa::toString(){
    stringstream x;
    x<<"Nombre de la empresa: "<<getName();

    return x.str();

}


Empresa::~Empresa(){}