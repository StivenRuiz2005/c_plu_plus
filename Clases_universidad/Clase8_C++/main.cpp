#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    /*
    int num;
    cout<<"numero:"<< endl;
    //semilla
    srand(time(NULL));

    //Formula: limite inferior + rand()%(limite superior +1 - limite inferior)
    num = rand()%(10);


    cout<<num;
    */

    int matriz[6][6];
    int n=0;
    cout << "MATRIZ DE NUMEROS ALEATORIOS" << endl;
    srand(time(NULL));

    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            if (i %2==0)
            {
                while(true)
                {
                    n = 10 + rand()%(101 - 10);
                    if (n%2==0)
                    {
                        matriz[i][j]=n;
                        break;
                    }
                }
            }
            else
            {
                while(true)
                {
                    n = 10 + rand()%(101 - 10);
                    if (n%2!=0)
                    {
                        matriz[i][j]=n;
                        break;
                    }
                }
            }

        }

    }
    for (int i=0; i<6; i++){
        for (int j=0; j<6; j++){
            cout<< matriz[i][j]<<" ";

        }
    cout<< endl;
    }

    return 0;
}

