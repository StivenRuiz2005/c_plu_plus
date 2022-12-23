#ifndef AGUA_MINERAL_H
#define AGUA_MINERAL_H
#include <iostream>
#include <Bodega.h>

using namespace std;

class Agua_mineral : public Bodega
{
    public:
        Agua_mineral() {}
        virtual ~Agua_mineral() {}

        string Getorigen() { return origen; }
        void Setorigen(string val) { origen = val; }

    protected:

    private:
        string origen;
};

#endif // AGUA_MINERAL_H
