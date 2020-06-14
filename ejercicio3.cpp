#include <iostream>

using namespace std;
bool isBisiesto(int);
int main(){
    int anno;//INICIADOR DE AÑO
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
    //Funcion booleana que hace las 2 pruebas de los años -- "true" si es bisiesto y "false" si no lo es. 
bool isBisiesto(int anno){
    //Si el año es multiplo de 400 es bisiesto
    if((anno%400)==0){
        return true;
    }
    //si el numero no es multiplo, pero es multiplo de 4 y no divisor de 100 entonces es bisiesto
    else if((anno%4==0)&&(anno%100!=0)){
        return true;
    }//Si no cumple ninguna de estas entonces no es bisiesto y se devuelve "false"
    else{
        return false;
    }

}


