#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(int num)
{
    tipo = "TIPO #1";
    valor = num;
    //ctor
}

ConcretePrototype1::~ConcretePrototype1()
{
    //dtor
}

Prototype* ConcretePrototype1::clone()
{
    return new ConcretePrototype1(*this);
}
