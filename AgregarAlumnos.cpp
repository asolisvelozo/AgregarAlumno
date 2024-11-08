#include <iostream>
#include <math.h>
using namespace std;

typedef char str[5];
typedef char str1[30];


struct Ingresantes {
    str legajo;
    str1 nomape;
    short div[50][60];
};
void solicitud(Ingresantes &alumno);
void inicregistro(Ingresantes &alumno);
void elegirdiv(Ingresantes &alumno);




int main() {

    Ingresantes alumno;
    inicregistro(alumno);
    solicitud(alumno);
    elegirdiv(alumno);
    return 0;
}


void solicitud( Ingresantes &alumno){

    cout<<"Bienvenido a la solicitud para ingresar! \n";
    cout<<"Ingrese su nombre y apellido: ";
    cin.getline(alumno.nomape, 30);
    cout<<"Cree un numero de legajo(maximo 5 numeros): ";
    cin.getline(alumno.legajo, 5);



}

void inicregistro(Ingresantes &alumno){

    for(int i=0; i<=50; i++){
        for(int j=0; j<=60; j++){
                alumno.div[i][j]=0;
        }
    }

}

void elegirdiv(Ingresantes &alumno){

    int d;

    cout<<"Ingrese la división en la que desea estar: ";
    cin>>d;

    for(int i; i<=50; i++){

            alumno.div[i][1]=d;

    }
    cout<<"Usted eleigio la division: "<<alumno.div;
}


