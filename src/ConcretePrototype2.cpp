#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(int num)
{
    tipo = "TIPO #2";
    valor = num;
    //ctor
}

ConcretePrototype2::~ConcretePrototype2()
{
    //dtor
}

Prototype* ConcretePrototype2::clone()
{
    return new ConcretePrototype2(*this);
}
