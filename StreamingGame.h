//
// Created by mendo on 24/8/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAME_H
#define LAB04_SOLID_STREAMINGGAME_H

#include "Game.h"
#include <iostream>
#include <string>

using namespace std;

class StreamingGame: public Game{

public:
    StreamingGame(string, double, double);
    ~StreamingGame();
    string reemplazo();

};


#endif //LAB04_SOLID_STREAMINGGAME_H
