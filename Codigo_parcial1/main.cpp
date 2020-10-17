#include <iostream>
#include <math.h>

using namespace std;

void formulas(int [], int [], int, int);

int main()
{
    //Coordenadas de los cañones
    int coordenadasO[2]={0,0}, coordenadasD[2];
    cout << "Las coordenadas iniciales del canon O son (0,0)" << endl;
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
    cout << VxO << endl;
    cout << VyO << endl;
}

void formulas(int posicionO[], int posicionD[], int velocidadx, int velocidady){
    int x=posicionO[0]+velocidadx;
    int Vx=velocidadx;
    int y=posicionO[1]+velocidady;
}
