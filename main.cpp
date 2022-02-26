/* Christian Aldana 0909-21-697 */

/*<--- Declaración de Librerias --->*/
#include <iostream>
#include <conio.h>

using namespace std;

/*<-- Estructura Principal -->*/
int main(int argc, char** argv) {

    /*<-- Declaración de Variables -->*/
    char op;
    int op1, op2, resul;

    /*<-- Estructura do -->*/
    do{
        system("cls");// Limpieza de pantalla
        /*<- Mostrar en Pantalla ->*/
        cout<<"			***** CALCULADORA  *****";
        cout<<"\n\nOperaciones:"<<endl;

        cout<<"Suma (+)"<<endl;
        cout<<"Resta (-)"<<endl;
        cout<<"Multiplicacion (*)"<<endl;
        cout<<"Division (/)"<<endl;
        cout<<"Opcion: ";
        cin>>op; //Ingreso de Valor a Variable

        /*<-- Estructura Switch -->*/
        switch(op){
            case '+':{ //Caso de suma
                cout<<"		<--- SUMA --->"<<endl<<endl;
                cout<<"Digite el Operando 1: "; cin>>op1;
                cout<<"Digite el Operando 2: "; cin>>op2;
                resul = op1 + op2; //Operacion de Suma

                cout<<"La suma resulta ser: "<<resul;
                getch(); //Detener el programa
                break;
           
            default: { //Mensaje de Error
                cout<<"Este Operador es Invalido, Preciona enter para continuar";
                getch(); //Detener el programa
            }
        }

    } while ((op != '+') && (op != '-') && (op != '*') && op != '/'); //Condicion while de salida

    getch(); //Detener el Programa
    return 0; //Devolver el valor de 0
}

