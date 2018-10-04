#include <iostream>
#include <string>

#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
#include "Prototype.h"

int main()
{


    Prototype* prueba = new ConcretePrototype1(10);
    Prototype* prueba_clone = prueba->clone();

    Prototype* prueba2 = new ConcretePrototype2(200);
    Prototype* prueba2_clone = prueba2->clone();

    //Muesetra el tipo y el valor de cada instancia.

    std::cout<< prueba->getTipo()<< " : "<< prueba->getValor()<< std::endl;

    std::cout<< prueba_clone->getTipo()<< " : "<< prueba_clone->getValor()<< std::endl;

    std::cout<< prueba2->getTipo()<< " : "<< prueba2->getValor()<< std::endl;

    std::cout<< prueba2_clone->getTipo()<< " : "<< prueba2_clone->getValor()<< std::endl;

    std::cout<< "\nDespues de hacer cambios a los valores de los clones \nmostrando que son objetos independientes"<< std::endl;

    prueba_clone->set(1);
    prueba2_clone->set(2);

    //Muesetra el tipo y el valor de cada instancia despues del cambio

    std::cout<< prueba->getTipo()<< " : "<< prueba->getValor()<< std::endl;

    std::cout<< prueba_clone->getTipo()<< " : "<< prueba_clone->getValor()<< std::endl;

    std::cout<< prueba2->getTipo()<< " : "<< prueba2->getValor()<< std::endl;

    std::cout<< prueba2_clone->getTipo()<< " : "<< prueba2_clone->getValor()<< std::endl;

    return 0;
}
