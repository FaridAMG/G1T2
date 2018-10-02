//
// Created by farida on 27/08/18.
//

#ifndef DESIGNPATTERNSCPLUSPLUS_CARFACTORY_H
#define DESIGNPATTERNSCPLUSPLUS_CARFACTORY_H


#include "Car.h"

class CarFactory {

    Car* TheCar = nullptr;

public:
    CarFactory();

    Car &getTheCar() const;

    void setTheCar( Car &TheCar);

};




class LuxuryCarFactory: public CarFactory{

public:
    LuxuryCarFactory();

};



class NormalCarFactory: public CarFactory{
public:
    NormalCarFactory();
};



#endif //DESIGNPATTERNSCPLUSPLUS_CARFACTORY_H
