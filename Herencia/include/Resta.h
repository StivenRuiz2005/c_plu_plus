#ifndef RESTA_H
#define RESTA_H
#include <iostream>
#include <Operacion.h>

using namespace std;

class Resta : public Operacion
{
    public:
        Resta() {}
        virtual ~Resta() {}

        void Operar(){
            resultado = num1 - num2;
        }

    protected:

    private:
};

#endif // RESTA_H
