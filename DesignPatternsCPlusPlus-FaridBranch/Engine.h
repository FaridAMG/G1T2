//
// Created by farida on 27/08/18.
//

#ifndef DESIGNPATTERNSCPLUSPLUS_ENGINE_H
#define DESIGNPATTERNSCPLUSPLUS_ENGINE_H


class Engine {

    int Horsepower = 0;
    int MaxSpeed = 0;

public:
    Engine();

    int getHorsepower() const;

    int getMaxSpeed() const;

    void setHorsepower(int Horsepower);

    void setMaxSpeed(int MaxSpeed);

};

class LuxuryEngine: public Engine{
public:
    LuxuryEngine();
};

class NormalEngine: public Engine{
public:
    NormalEngine();
};


#endif //DESIGNPATTERNSCPLUSPLUS_ENGINE_H
