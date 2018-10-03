#include <iostream>
#include "Singleton.h"

int main() {

    //new Singleton();
    Singleton *s = Singleton::getInstance();
    Singleton *r = Singleton::getInstance();

    /* The addresses will be the same. */
    std::cout << s << std::endl;
    std::cout << r << std::endl;

    return 0;
}