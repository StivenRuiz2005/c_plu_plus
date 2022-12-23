#ifndef DIVISION_H
#define DIVISION_H
#include <iostream>
#include <Operacion.h>

using namespace std;

class Division : public Operacion
{
    public:
        Division() {}
        virtual ~Division() {}

        void Operar(){
            resultado = num1 / num2;
        }

    protected:

    private:
};

#endif // DIVISION_H
