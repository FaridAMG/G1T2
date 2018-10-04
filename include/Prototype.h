#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <string>

class Prototype
{
    public:
        std::string tipo;
        int valor;

        Prototype();
        virtual ~Prototype();
        virtual Prototype* clone() =0;
        std::string getTipo();
        int getValor();
        void set(int num);
};

#endif // PROTOTYPE_H
