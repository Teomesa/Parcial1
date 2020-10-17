#include <iostream>
#include <math.h>

using namespace std;

void formulas(int [], int [], int, int);

int main()
{
    //Coordenadas de los cañones
    int coordenadasO[2]={0}, coordenadasD[2];
    cout << "Ingrese la posicion en Y del canonO";
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
    cout << "Ingrese la velocidad inicial con la cual es lanzada el cañon O: ";
    cin >> velocidadO;
    float VxO,VyO;
    VxO=velocidadO*sin(anguloO);
    VyO=velocidadO*cos(anguloO);
    int caso;
    cout << "ingrese el caso quiere ver: ";
    cout << "Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo" << endl;
    cout << "Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo" << endl;
    cout << "Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el canón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido." << endl;
    cout << "Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los canones defensivo y ofensivo puedan ser destruidos." << endl;
    cin >> caso;
    switch (caso) {
    case 1:
    {
        float Rd=0.025;
    }
    }
}

void formulas(int posicionO[2], int velocidadx, int velocidady){
    int t=0;
    int t1=(-velocidady+sqrt(pow(velocidady,2)-4*posicionO[1]*-4.90))/2*posicionO[0];
    int t2=(-velocidady-sqrt(pow(velocidady,2)-4*posicionO[1]*-4.90))/2*posicionO[0];
    if (t1>=0)
        t=t1;
    else
        t=t2;
    int x=posicionO[0]+velocidadx*t;
    int Vx=velocidadx;
    int y=posicionO[1]+velocidady*t-(9.81/2)*pow(t, 2);
    int Vy=-9.8*t;
}
