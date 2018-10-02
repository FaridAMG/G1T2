//
// Created by farida on 27/08/18.
//

#ifndef DESIGNPATTERNSCPLUSPLUS_CAR_H
#define DESIGNPATTERNSCPLUSPLUS_CAR_H


#include "Body.h"
#include "Tires.h"
#include "Engine.h"

class Car {

    Body carBody;
    Tires carTires;
    Engine carEngine;

public:
    Car(const Body &carBody, const Tires &carTires, const Engine &carEngine);

    void ShowCarStats();


};


#endif //DESIGNPATTERNSCPLUSPLUS_CAR_H
