#include <iostream>
using namespace std;

int main() {



    cout << "ingresa un numero para la tabla" << endl;
    int numero;
    int cant1;
    int resultado;

    cin >> cant1;
    while (numero < 11 ){
        resultado= cant1*numero;
        cout << cant1 << " x " << numero << " = " << resultado << endl ;
        cout << endl;
        numero = numero +1 ;
    }
 //----------------------------------------------------------------------------------------------
        /*
        int n1 = 5;
        int n2 = 8;
        int n3 = 9;
        for (int i = 1; i <= 10; i++) {
            int total= n1*i;
            cout << n1 << "x" << i << "=" << total << endl;
            cout << endl;}

        for (int i = 1; i <= 10; i++) {
            int total= n2*i;
            cout << n2 << "x" << i << "=" << total << endl;
            cout << endl;}

        for (int i = 1; i <= 10; i++) {
            int total= n3*i;
            cout << n3 << "x" << i << "=" << total << endl;
            cout << endl;} */
//----------------------------------------------------------------------------------------------

  /* int opcion;

   cout << "Introduzca un numero del 1 al 7 para saber si es un dia laboral o no" << endl;
   cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Hoy es dia Lunes, es un dia laboral" << endl;
            break;
        case 2:
            cout << "Hoy es dia Martes, es un dia laboral" << endl;
            break;
        case 3:
            cout << "Hoy es dia Miercoles, es un dia laboral" << endl;
            break;
        case 4:
            cout << "Hoy es dia Jueves, es un dia laboral" << endl;
            break;
        case 5:
            cout << "Hoy es dia Viernes, es un dia laboral" << endl;
            break;
        case 6:
            cout << "Hoy es dia Sabado, es un dia laboral" << endl;
            break;
        case 7:
            cout << "Hoy es dia domingo, No es un dia laboral" << endl;
            break;
    }*/

    return 0;
}