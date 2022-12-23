#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H
#include <iostream>
#include <Operacion.h>

using namespace std;

class Multiplicacion : public Operacion
{
    public:
        Multiplicacion() {}
        virtual ~Multiplicacion() {}

        void Operar(){
            resultado = num1 * num2;
        }

    protected:

    private:
};

#endif // MULTIPLICACION_H
