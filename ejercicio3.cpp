#include <iostream>

using namespace std;
bool isBisiesto(int);
int main(){
    /*
    Que indique si un año es bisiesto o no.
Deberá de solicitarle al usuario que ingrese el año e imprimir en pantalla si es bisiesto o no.
Para determinar si un año es bisiesto se hacen un máximo de dos pruebas, así: si el año es divisible
entre 400, es bisiesto; pero si no es divisible entre 400 se realiza la siguiente prueba: que el año sea
divisible entre 4 y no sea divisible entre 100; si tampoco cumple esta segunda prueba, entonces no
es bisiesto.*/
    int anno;
    cout << "----COMPROBADOR DE BISIESTO----"<<endl;
    cout << "ingresa el periodo anual que deseas comprobar"<<endl;
    cout <<"Ejemplo: 2020,2019,2021,2031: ";
    cin >> anno;
    if(isBisiesto(anno)){
        cout<<"El "<<anno<< " es bisiesto"<<endl;
    }else{
        cout<<"El "<<anno<< " no es bisiesto"<<endl;

    }
    
    return 0; 
}
bool isBisiesto(int anno){

    if((anno%400)==0){
        return true;
    }
    else if((anno%4==0)&&(anno%100!=0)){
        return true;
    }
    else{
        return false;
    }

}


