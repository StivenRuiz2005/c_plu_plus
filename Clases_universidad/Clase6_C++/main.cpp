#include <iostream>

using namespace std;

void intercambio(int *a, int *b);
void imprimir(int *a, int *b);

int main()
{
    int a=0;
    int b=0;
    cout<<"Ingrese el numero A:"<< endl;
    cin>>a;
    cout<<"Ingrese el numero B"<< endl;
    cin>>b;

    intercambio(&a,&b);
    imprimir(&a,&b);
    return 0;
}

void intercambio(int *a, int *b){
    int c;
    c= *a;

    cout<<"Numero A: "<< *a << endl;
    cout<<"Numero B: "<< *b <<endl;

    *a= *b ;
    *b= c ;

    cout<<"Numero A modificado: "<< *a << endl;
    cout<<"Numero B modificado: "<< *b <<endl;

}

void imprimir(int *a, int *b){

    cout<<"A: "<< *a<< endl;
    cout<<"B: "<< *b<< endl;

}
