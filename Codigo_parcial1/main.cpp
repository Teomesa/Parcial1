#include <iostream>
#include <math.h>

bool siempre=1;

using namespace std;

int main()
{
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
        while (siempre==1){
            int coordenadasO[2]={0}, coordenadasD[2];
            cout << "Ingrese la posicion en Y del canon O: ";
            cin >> coordenadasO[1];
            cout << "Ingrese las coordenadas del canon D (x,y): ";
            for (int i=0;i<2;i++){
                cin >> coordenadasD[i];
            }
            float anguloO, velocidadO;
            float pi=3.1416;
            cout << "Ingrese el angulo con el cual es lanzada la bala del canon respecto a la horizontal: ";
            cin >> anguloO;
            anguloO=(anguloO*pi)/180;
            cout << "Ingrese la velocidad inicial con la cual es lanzada el canon O: ";
            cin >> velocidadO;
            float VxO,VyO;
            VxO=velocidadO*sin(anguloO);
            VyO=velocidadO*cos(anguloO);
            bool ataque=false;
            float Radio_desc_canonO=0.05*coordenadasD[0];
            int arreglo[4]={};
            float tiempo=0;
            int cont=0;
            for (; tiempo<1000;tiempo+=0.5){
                float x=VxO*tiempo;
                float Vx=VxO;
                float y=coordenadasO[1]+(VyO*tiempo)-(4.90*pow(tiempo, 2));
                float Vy=-9.8*tiempo;
                arreglo[0]=x;
                arreglo[1]=Vx;
                arreglo[2]=y;
                arreglo[3]=Vy;
                if(coordenadasD[0] <= arreglo[0]+(Radio_desc_canonO) or arreglo[2]-(Radio_desc_canonO) >= coordenadasD[1]){
                    cout << "¡PRECAUCION, MISIL CERCA!" << endl;
                    ataque = true;
                    break;
                }
                else{
                    cout << "No se aproxima ningun misil" << endl;
                }
                cont+=1;
            }
            int posbalax=VxO*tiempo;
            int posbalay=coordenadasO[1]+(VyO*tiempo)-(4.90*pow(tiempo, 2));
            if (ataque==true){
                cout << "Los parametros de simulacion son: " << endl;
                cout << "La explosion fue en las coordenadas: " << "X= " << posbalax << " Y= " << posbalay << endl;
                cout << "En un tiempo t= " << cont+2 << endl;
                cout << "La distancia recorrida por el misil ofensivo fue: " << "Horizontal: " << posbalax << " vertical: " << posbalay << endl;
                cout << "La distancia recorrida por el misil defensivo fue: " << "Horizontal: " << coordenadasD[0]-posbalax << " vertical: " << posbalay-coordenadasD[1] << endl;
                cout << endl;
                ataque=false;
            }
            cout << "Quiere generar otra simulacion?: 1.si, 2.no \n: ";
            cin >>siempre;
            cout << endl;
        }
    }
    case 2:
    {
        while (siempre==1){
            int anguloD;
            float pi=3.1416;
            cout << "Ingrese el angulo para la defensa: ";
            cin >> anguloD;
            anguloD=(anguloD*pi)/180;
            float tiempo=2;
            for (;tiempo<1000;tiempo+=0.5){

            }
        }
    }
    }
}

