//
// Created by farida on 27/08/18.
//

#include "CarFactory.h"

 Car &CarFactory::getTheCar() const {
    return *TheCar;
}

void CarFactory::setTheCar( Car &TheCar) {
    CarFactory::TheCar = &TheCar;
}

CarFactory::CarFactory() {}


LuxuryCarFactory::LuxuryCarFactory() {

    Tires* tires = new LuxuryTires();
    Engine* engine = new LuxuryEngine();
    Body* body = new LuxuryBody();
    Car* car = new Car(*body, *tires, *engine);

    setTheCar(*car);

}

NormalCarFactory::NormalCarFactory() {

    Tires* tires = new NormalTires();
    Engine* engine = new NormalEngine();
    Body* body = new NormalBody();
    Car* car = new Car(*body, *tires, *engine);

    setTheCar(*car);

}
