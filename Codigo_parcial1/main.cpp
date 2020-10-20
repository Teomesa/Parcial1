#include <iostream>
#include <math.h>

using namespace std;

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
    int t=1;
    for (; t<1000;t++){
        int x=VxO*t;
        int Vx=VxO;
        int y=coordenadasO[1]+VyO*t-(9.81/2)*pow(t, 2);
        int Vy=-9.8*t;
        arreglo[0]=x;
        arreglo[1]=Vx;
        arreglo[2]=y;
        arreglo[3]=Vy;
        if (distanciaD+arreglo[0]+arreglo[2]<=coordenadasO[0])
            break;
    }
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
        if(coordenadasD[0] <= arreglo[0]+(Radio_desc_canonO) or arreglo[2]-(Radio_desc_canonO) >= coordenadasD[1]){
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

