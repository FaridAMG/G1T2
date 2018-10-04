#ifndef CONCRETEPROTOTYPE1_H
#define CONCRETEPROTOTYPE1_H

#include "Prototype.h"

class ConcretePrototype1: public Prototype
{
    public:
        ConcretePrototype1(int num);
        virtual ~ConcretePrototype1();
        Prototype* clone();
};

#endif // CONCRETEPROTYPE1_H
