#include <iostream>
using namespace std;

int main () {

    float Y , Z , trabajo;
     
    cout << " Ingrese la fuerza horizontal Y en newton:" ; 
    cin >> Y;
    cout << " Ingrese la distancia recorrida en metros:" ;
    cin >> Z;
     
    if ( Y > 0 && Z > 0 )
    {
        trabajo = Y * Z;
         cout << "¿Cuanto trabajo realizo el operario?: ";
         cout << " realizo "<< trabajo << " de trabajo " ;


    } else {
        cout << " Dato invalido " ; 

    }
     return 0;
    
    }
