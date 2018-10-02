//
// Created by farida on 27/08/18.
//

#include <iostream>
#include "Car.h"

Car::Car(const Body &carBody, const Tires &carTires, const Engine &carEngine) : carBody(carBody), carTires(carTires),
                                                                                carEngine(carEngine) {}

void Car::ShowCarStats() {
    std::cout<<"...Tha cars stats are...:"<< std::endl;

    std::cout<<"TirePressure..."+std::to_string(carTires.getPressure())<<"...TirePerformance..."+carTires.getPerformance()<< std::endl;
    std::cout<<"HorsePower..."+std::to_string(carEngine.getHorsepower())<<"...MaxSpeed..."+std::to_string(carEngine.getMaxSpeed())<< std::endl;
    std::cout<<"BodyMaterial..."+carBody.getMaterial()<<"...BodyDragPercentage..."+std::to_string(carBody.getDragPercentage())<< std::endl;


}
