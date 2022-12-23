#ifndef OPERACION_H
#define OPERACION_H
#include <iostream>

using namespace std;

class Operacion
{
    public:
        Operacion() {
        num1=0;
        num2=0;
        resultado=0;
        }
        virtual ~Operacion() {}

        void Cargar1(){
            cout<< "Ingrese el primer valor: ";
            cin>> num1;
        }
        void Cargar2(){
            cout<< "Ingrese el segundo valor: ";
            cin>> num2;
        }
        void MostrarResultado(){
            cout<< "Resultado: " << resultado << endl;
        }


        float Getnum1() { return num1; }
        void Setnum1(float val) { num1 = val; }
        float Getnum2() { return num2; }
        void Setnum2(float val) { num2 = val; }
        float Getresultado() { return resultado; }
        void Setresultado(float val) { resultado = val; }

    protected:
        float num1;
        float num2;
        float resultado;

    private:
};

#endif // OPERACION_H
