#include <iostream>
#include <string>

using namespace std;
bool hacerIntento(int);



int main(){ 
    cout << "----NUMERO MAGICO ----" << endl;
    cout << "Atrevete a adivinar el numero secreto entre 0 y 100!  \n(o presiona control + z para deterte) " << endl;
    int prueba;
    int intentos = 5;//INTENTOS
    cout << "A ver, un intento: " ;


    //mientras haya intentos y haya algo que leer hacer un intento;
    while(intentos>0 && cin>>prueba){

        /*Se hace un intento:
             si es correcto el numero se acaba el programa asignando los intentos a 0
                si no es correcto pero se acabaron los intentos el programa termina
                    si aun hay intentos se muestras cuantos hay
                        luego es necesario quitar un intento */
        if(hacerIntento(prueba)){
            intentos = 0 ;
            cout << "-----FIN-----" << endl;

        }else if(intentos == 0){
            cout << "-----FIN-----" << endl;
        }else{
            cout << "Te quedan " << intentos-1 << " intentos"<< endl << endl ;
        }
        intentos--;
        if(intentos > 0){
            cout << "Puedes intentarlo aun: ";
        }   
    }
}

bool hacerIntento(int intento){
    int secreto = 56;//numero secreto

    /*Se devuelve "true" solo si se descubre el numero secreto sino, se dan las pistas y se devuelve false */
        if (intento ==secreto){
            cout << "WOWWWWWWW, correcto!!! :)" << endl; 

            return true;
        }  //Si es intento es mayor que el numero secreto se da una pista
        else if (intento > secreto)
        {
            cout << "\nNou, nada que ver! \nPISTA: El numero secreto es menor que ese :(" << endl; 
            return false;
            
              
        }   //Si es intento es menor que el numero secreto se da una pista
        else if(intento < secreto)
        {
            cout << "\nUyyyy!! \nPISTA: El numero secreto es mayor a ese :(" << endl; 
            return false;
        }
        
}   

