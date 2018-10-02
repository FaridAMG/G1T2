//
// Created by farida on 29/08/18.
//

#include <iostream>
#include "CarFactory.h"
#include "mainAbstractFact.h"

void mainAbstractFact::tryAbstractFactory() {

    std::cout << "Hello, World! Lets create cars" << std::endl;

    CarFactory* createLuxCar = new LuxuryCarFactory();
    CarFactory* createNormCar = new NormalCarFactory();

    std::cout << "...LUXURY CAR PRODUCTION..." << std::endl;
    createLuxCar->getTheCar().ShowCarStats();

    std::cout << "...NORMAL CAR PRODUCTION..." << std::endl;
    createNormCar->getTheCar().ShowCarStats();

}
