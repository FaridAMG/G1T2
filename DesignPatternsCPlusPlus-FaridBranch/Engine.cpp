//
// Created by farida on 27/08/18.
//

#include "Engine.h"



int Engine::getHorsepower() const {
    return Horsepower;
}

int Engine::getMaxSpeed() const {
    return MaxSpeed;
}

void Engine::setHorsepower(int Horsepower) {
    Engine::Horsepower = Horsepower;
}

void Engine::setMaxSpeed(int MaxSpeed) {
    Engine::MaxSpeed = MaxSpeed;
}

Engine::Engine() {}

LuxuryEngine::LuxuryEngine() {

    setMaxSpeed(380);
    setHorsepower(3800);

}

NormalEngine::NormalEngine() {

    setMaxSpeed(180);
    setHorsepower(1500);

}
