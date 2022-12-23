#ifndef SALA_H
#define SALA_H
#include <Espectadores.h>
#include <iostream>
#include <iomanip>
#include <time.h>
#include<stdlib.h>
#include <Pelicula.h>
#include <vector>
#include<random>
#include <string>

using namespace std;


class Sala
{
    public:
        Sala() {}
        virtual ~Sala() {}

    void CrearMatriz()
    {
        cout<<"\t**********SALA DE CINE**********\n"<<endl;
    string letra = "";
      for(int i=0; i<6;i++){
        for(int j=0; j<6;j++){
            switch (j){
            case 0: letra ="A";break;
            case 1: letra ="B";break;
            case 2: letra ="C";break;
            case 3: letra ="D";break;
            case 4: letra = "E"; break;
            case 5: letra = "F"; break;
            }switch (i){
            case 0: matriz[i][j] = "6"; matriz[i][j]+=letra; break;
            case 1: matriz[i][j] = "5"; matriz[i][j]+=letra; break;
            case 2: matriz[i][j] = "4"; matriz[i][j]+=letra; break;
            case 3: matriz[i][j] = "3"; matriz[i][j]+=letra; break;
            case 4: matriz[i][j] = "2"; matriz[i][j]+=letra; break;
            case 5: matriz[i][j] = "1"; matriz[i][j]+=letra; break;
            }
            cout<<setw(7)<<matriz[i][j]<<" ";
        }cout<<"\n";
    }
    cout<<"\n***************************************************";
}
    void registro_de_peliculas(int n)
    {
    string n1;
    int n2;
    string n3;
    int n4;
    string n5;
    int n6;
for (int i=0;i<n;i++){
    Pelicula peli;
    cout<<"\nDigite el nombre de la pelicula: ";
    cin.ignore();
    getline(cin,n1);
    peli.Settitulo(n1);

    cout<<"\nDigite la duracion en minutos de la pelicula: ";
    cin>>n2;
    peli.Setduracion(n2);

    cout<<"\nDigite el genero de la pelicula: ";
    cin.ignore();
    getline(cin,n3);
    peli.Setgenero(n3);

    cout<<"\nDigite la edad minima para ver de la pelicula: ";
    cin>>n4;
    peli.SetedadMinima(n4);

    cout<<"\nDigite el nombre del director la pelicula: ";
    cin.ignore();
    getline(cin,n5);
    peli.Setn_director(n5);

    cout<<"\nDigite el precio para ver la pelicula: "<< endl;
    cin>>n6;
    peli.Setprecio(n6);

    system("PAUSE");
    system("CLS");


    peliculas.push_back(peli);
}
}
    void generarUsuarios(int n)
    {

    string nombres[36] = {"Tulio","Alberto","Elver","Juan","Devora","Benito","Rayman","Simon",
    "Rosa","AnaLisa","Javier","Cristiano","Tomas","Ronaldo","Ronaldinho","Pedro","Adriel",
    "Elsa","Farid","Flavio","Hans","Inder","Ion","Jaguar","Jou","Keanu","Liam","Lolo","Milos","MirtMon",
    "Nadir","Nahuel","Naim","CJ","Ngolo","Nice"};

    string apellidos[36] = {"Mecor","Mosquera","Tabares","falarga","lesa","Camelas","Tolomeo","Megano",
    "Cacibo","Kane","pozo","Messi","Aveiro","Turmado","Nazario","Gaucho","Ivanova","Ivanov","Kuznetsova",
    "Kuznetsov","Smirnova" ,"Petrov", "Magomedov" ,"Petrova","Smirnov","Popov","Popova","Rodriguez","Blandon","Duque","Perez",
    "Aguilera","Lopez","Maluma","OBLEA","PINPIN"};

    srand(time(NULL));
    random_device rd;
    mt19937 gen(rd());
    int random1 =0;
    int random2=0;
    int random3=0;
    int random4=0;
    Espectadores p1;
    for(int i=0;i<n;i++){


    random1= 5 + rand()%((101)-5);
    random2= 0 + rand()%((36+1)-1);
    uniform_int_distribution<> money(1, 100000);
    random3= money(rd);
    uniform_int_distribution<> iden(100, 999);
    random4 = iden(rd);

    p1.Setnombre(nombres[random2]);
    p1.Setapellido(apellidos[random2]);
    p1.Setedad(random1);
    p1.Setid(random4);
    p1.Setdinero(random3);

    personas.push_back(p1);
    }

}
    bool comprobar(int r_edad, int precio_p,int edad_usuario, int plata_usuario)
    {
    bool val= false;
    if ((plata_usuario>=precio_p)&&(edad_usuario>=r_edad)){
        val= true;
    }
    return val;
    }
    void asignar_silla(int r)
    {
    srand(time(NULL));
    int n1;
    vector<string> combinaciones = {"1A","1B","1C","1D","1E","1F","2A","2B","2C","2D","2E","2F","3A","3B","3C","3D","3E","3F","4A","4B","4C","4D","4E","4F","5A","5B","5C","5D","5E","5F","6A","6B","6C","6D","6E","6F"};
    for (int i=0;i<r;i++)
    {
       if(comprobar(peliculas[0].GetedadMinima(),peliculas[0].Getprecio(),personas[i].Getedad(),personas[i].Getdinero())){
            do
            {
                n1= 0 + rand()%(((36+1)-1));
            } while (combinaciones[n1]=="0");
        personas[i].Setposicion(combinaciones[n1]);
        usuarios.push_back(personas[i]);
        comprobarMatriz(combinaciones[n1]);
        combinaciones[n1]="0";
        }
        else{
            nousuarios.push_back(personas[i]);
            }
    }
    imprimirUsuarios();

}
    void imprimirUsuarios()
    {
    cout<<"*******************PELICULA*******************"<<endl;
    actualizarMatriz();
    cout<< endl;
    cout<<"****************************************************"<<endl;
    cout<< endl;
      cout<<"USUARIOS APTOS: "<< endl;
    for (int i=0;i<usuarios.size();i++){

        cout<<"Nombre: "<< usuarios[i].Getnombre()<< endl;
        cout<<"Apellido: "<< usuarios[i].Getapellido()<< endl;
        cout<<"Edad: "<< usuarios[i].Getedad()<< endl;
        cout<<"ID: "<< usuarios[i].Getid()<< endl;
        cout<<"Dinero: "<< usuarios[i].Getdinero()<< endl;
        cout<<"Silla:"<< usuarios[i].Getposicion()<< endl;
        cout<< endl;
    }
    cout<<"USUARIOS NO APTOS: "<< endl;
    for (int i=0;i<nousuarios.size();i++){

        cout<<"Nombre: "<< nousuarios[i].Getnombre()<< endl;
        cout<<"Apellido: "<< nousuarios[i].Getapellido()<< endl;
        cout<<"Edad: "<< nousuarios[i].Getedad()<< endl;
        cout<<"ID: "<< usuarios[i].Getid()<< endl;
        cout<<"Dinero: "<< nousuarios[i].Getdinero()<< endl;
        cout<<"Silla: "<< nousuarios[i].Getposicion()<< endl;
        cout<< endl;
    }
  }
    void comprobarMatriz(string a)
    {
    string c = to_string(usuarios[num].Getid());
    for(int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            if (matriz[i][j]== a){
                matriz[i][j]= c;
            }
        }
    }
    num+= 1;
 }
    void actualizarMatriz(){
    for(int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            cout<<setw(7)<<matriz[i][j]<<" ";
        }cout<< endl;
    }
    cout<<"Titulo: "<<peliculas[0].Gettitulo() <<" - Duracion: "<< peliculas[0].Getduracion()<<"min - "<< "Edad minima: "<< peliculas[0].GetedadMinima()<< "anos - " << "Genero: "<< peliculas[0].Getgenero()<< " - Autor: " << peliculas[0].Getdirector()<< " - Precio: "<< peliculas[0].Getprecio()<< endl;
    }
    protected:

    private:

        string matriz[6][6];
        vector<Espectadores> personas;
        vector<Pelicula> peliculas;
        vector<Espectadores> usuarios;
        vector<Espectadores> nousuarios;
        int num=0;

};


#endif // SALA_H
