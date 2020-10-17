#include <iostream>
#include <math.h>

using namespace std;

int formulas(int [], int, int);

int main()
{
    //Coordenadas de los cañones
    int coordenadasO[2]={0}, coordenadasD[2];
    cout << "Ingrese la posicion en Y del canon O: ";
    cin >> coordenadasO[1];
    cout << "Ingrese las coordenadas del canon D (x,y): ";
    for (int i=0;i<2;i++){
        cin >> coordenadasD[i];
    }
    int distanciaD, alturaD, anguloO, velocidadO;
    distanciaD=coordenadasD[0];
    alturaD=coordenadasD[1];
    cout << "Ingrese el angulo con el cual es lanzada la bala del canon respecto a la horizontal: ";
    cin >> anguloO;
    cout << "Ingrese la velocidad inicial con la cual es lanzada el canon O: ";
    cin >> velocidadO;
    float VxO,VyO;
    VxO=velocidadO*sin(anguloO);
    VyO=velocidadO*cos(anguloO);
    int arreglo[4]={};
    int t=0;
    int t1=(-VyO+sqrt(pow(VyO,2)-4*coordenadasO[1]*-4.90))/2*coordenadasO[0];
    int t2=(-VyO-sqrt(pow(VyO,2)-4*coordenadasO[1]*-4.90))/2*coordenadasO[0];
    if (t1>=0)
        t=t1;
    else
        t=t2;
    int x=coordenadasO[0]+VxO*t;
    int Vx=VxO;
    int y=coordenadasO[1]+VyO*t-(9.81/2)*pow(t, 2);
    int Vy=-9.8*t;
    arreglo[0]=x;
    arreglo[1]=Vx;
    arreglo[2]=y;
    arreglo[3]=Vy;
    int caso;
    cout << "ingrese el caso quiere ver: " << endl;
    cout << "1. Generar disparos (al menos tres) ofensivos que comprometan la integridad del canon defensivo" << endl;
    cout << "2. Generar disparos (al menos tres) defensivos que comprometan la integridad del canon ofensivo" << endl;
    cout << "3. Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el canon defensivo sea destruido sin importar si el canon ofensivo pueda ser destruido." << endl;
    cout << "4. Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los canones defensivo y ofensivo puedan ser destruidos." << endl;
    cout << ": ";
    cin >> caso;
    switch (caso) {
    case 1:
    {
        bool ataque;
        float Radio_desc_canonD=0.025*coordenadasD[0];
        float Radio_desc_canonO=0.05*coordenadasD[0];
        if(coordenadasD[0] <= x+(Radio_desc_canonO) or y-(Radio_desc_canonO) >= coordenadasD[1]){
            cout << ""
                    "¡PRECAUCION, MISIL CERCA!" << endl;
            ataque = true;
        }
        else{
            cout << "No se aproxima ningun misil";
        }

    }
    }
}

int formulas(int posicionO[2], int velocidadx, int velocidady){

    return *arreglo;
}
