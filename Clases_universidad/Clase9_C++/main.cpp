#include <iostream>

using namespace std;

//Declarar clase

class Persona{
    // Declarar atributos
    private:
        int cedula;
        int edad;
        string nombre;

    public:
        // Constructor de la clase por defecto
        Persona();

        // Constructor alternativo
        Persona(int _cedula, int _edad, string _nombre);

        // Declarar Metodos
        void SetNombre(string _nombre);
        string GetNombre();

        void SetCedula(int _cedula);
        int GetCedula();

        void SetEdad(int _edad);
        int GetEdad();



};

// impleme_nombretar constructor por defecto

Persona::Persona(){
    cedula=0;
    edad=0;
    nombre="";

}

// implementar constructor alternativo

Persona::Persona(int _cedula, int _edad, string _nombre){

    cedula= _cedula;
    edad= _edad;
    nombre= _nombre;
}

// implementar los metodos

// Metodos Set Y Get de cada Atriuto

// nombre

void Persona::SetNombre(string _nombre){
    nombre= _nombre;

}

string Persona::GetNombre(){
    return nombre;
}

// Cedula

void Persona::SetCedula(int _cedula){
    cedula= _cedula;
}
int Persona::GetCedula(){
    return cedula;
}

// edad

void Persona::SetEdad(int _edad){
    edad= _edad;
}
int Persona::GetEdad(){
    return edad;

}



int main()
{
    Persona persona1;

    cout << "Clases y objetos" << endl;

    persona1.SetNombre("Stiven");
    persona1.SetEdad(17);
    persona1.SetCedula(1117015029);

    cout << "Persona 1"<< endl;
    cout << endl;
    cout << "Nombre: " << persona1.GetNombre()<< endl;
    cout << "Edad: " << persona1.GetEdad()<< endl;
    cout << "Cedula: " << persona1.GetCedula()<< endl;

    cout << endl;
    cout << "Persona 2"<< endl;
    cout << endl;

    Persona persona2(1117013982,17,"Valentina");

    cout << "Nombre: " << persona2.GetNombre()<< endl;
    cout << "Edad: " << persona2.GetEdad()<< endl;
    cout << "Cedula: " << persona2.GetCedula()<< endl;
    return 0;
}
