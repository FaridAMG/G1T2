#ifndef CONCRETEPROTOTYPE2_H
#define CONCRETEPROTOTYPE2_H
#include <string>

#include "Prototype.h"

class ConcretePrototype2: public Prototype
{
    public:
        ConcretePrototype2(int num);
        virtual ~ConcretePrototype2();
        Prototype* clone();
};

#endif // CONCRETEPROTOTYPE2_H
