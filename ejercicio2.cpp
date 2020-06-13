#include <iostream>
#include <string>

using namespace std;
bool intento(int, int);



int main(){
    /*Se desea un programa en el cual el usuario pueda jugar adivinando un número que está
previamente guardo en el programa.
El número debe de estar en el rango de 1 a 100, solo debe de trabajar con números enteros.
El usuario tendrá 5 intentos para poder adivinar el número. Por cada intento el programa deberá
darle estas pistas al usuario: si el número que ingresa es menor al número secreto,si el número
que ingresa mayor al número que está intentando adivinar y cuantos intentos le quedan.

Si el usuario ya no quiere jugar, indicarle qué pulsar para finalizar el programa.
*/

int shhhhh = 70; //Numero secreto
cout << "----NUMERO MAGICO ----" << endl;
cout << "Atrevete a adivinar el numero secreto!  \n(o presiona control + z para deterte) " << endl;
int prueba;
int i = 5;
cout << "A ver, un intento: " ;
while(i>0 && cin>>prueba){

    
    if(intento(prueba, shhhhh)){
        i = 0 ;
        cout << "-----FIN-----" << endl;

    }else if(i == 0){
        cout << "-----FIN-----" << endl;
    }else{
        cout << "Te quedan " << i-1 << " intentos"<< endl << endl ;
    
    }
    i--;
    if(i > 0){
        cout << "Puedes intentarlo aun: ";
    }
    
}


}
bool intento(int intento, int secreto){
        if (intento == secreto){
            cout << "WOWWWWWWW, correcto!!! :)" << endl; 

            return true;
        }
        else if (intento > secreto)
        {
            cout << "\nNou, nada que ver! \nPISTA: El numero secreto es menor que ese :(" << endl; 
            return false;
        }
        else if(intento < secreto)
        {
            cout << "\nUyyyy!! \nPISTA: El numero secreto es mayor a ese :(" << endl; 
            return false;
        }
        
}   

