#include "Prototype.h"

Prototype::Prototype()
{
    //ctor
}

Prototype::~Prototype()
{
    //dtor
}

std::string Prototype::getTipo()
{
    return tipo;
}

int Prototype::getValor()
{
    return valor;
}

void Prototype::set(int num)
{
    valor = num;
}
