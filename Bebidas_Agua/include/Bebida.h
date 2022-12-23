#ifndef BEBIDA_H
#define BEBIDA_H
#include <iostream>
#include <Bodega.h>

using namespace std;

class Bebida : public Bodega
{
    public:
        Bebida() {}
        virtual ~Bebida() {}

        float Getp_azucar() { return p_azucar; }
        void Setp_azucar(float val) { p_azucar = val; }
        bool Getpromocion() { return promocion; }
        void Setpromocion(bool val) { promocion = val; }

    protected:

    private:
        float p_azucar;
        bool promocion;
};

#endif // BEBIDA_H
