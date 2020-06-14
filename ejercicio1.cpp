#include <iostream>
#include <string>

using namespace std;

int input(string);
double sReal(double);
double sTotal();

int main(){
    
    cout <<"------EJERCICIO 1------"<<endl;
    
    int empleados=input("Ingrese la cantidad de empleados: ");
    int n=1;
    //RECORRER LA CANTIDAD DE EMPLEADOS

   for(empleados;empleados>0;empleados--){
    cout <<"---Empleado "<< n << "---"<<endl;
    
    double salario = sTotal();
    cout << "Salario total: " << salario << "USD del empleado " << n <<endl;
    cout << "Salario real: " << sReal(salario) << "USD" <<endl<<endl;
    n++;
}
    return 0;
}
//SALARIO TOTAL
double sTotal(){
    double hora_normal = 1.75;//USD
    double hora_extra = 2.50;//USD

    int horas_t = input("Horas trabajadas: ");
    int horas_ext = input("Horas extras: ");
    //CALCULO DEL SALARIO SIN DESCUENTOS
    double salario = hora_extra*horas_ext + horas_t * hora_normal;

    return salario;
}
//Salario real 
double sReal(double salario){
  
    double sReal;//iniciador
    double desc_sscc = salario*0.04;//DESCUENTO SEGURO SOCIAL
    double desc_afp = salario*0.0625;//DESCUENTO AFP
    double desc_renta = salario*0.1;//DESCUENTO RENTA
    double descuento = desc_afp + desc_sscc;//descuento total
    if(500.0<salario){descuento+=desc_renta;}//si es mayor a 500USD se incluye la renta

    sReal = salario - descuento;

    return sReal; 
}
//AYUDA DE INPUT / OUTPUT
int input(string mess){
    int input;
    cout << mess;
    cin >> input;
    return input;
}