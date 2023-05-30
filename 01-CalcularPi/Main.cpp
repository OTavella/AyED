#include <iostream>
#include <math.h>

using namespace std;


int main(){
    double n = 0;
    double dividendo = 0;
    double potencia = 0;
    double sumatoria = 0;
    double PI = 0;
    
    do
   {
    //CREAR POTENCIA
        double numero = -1;
         potencia = pow(numero,n);
         
        //CREAR DIVIDENDO
        dividendo =  ((2*n)+1);
        
        //RESULTADO SUMATORIA
        double sumatoria = sumatoria + ( (potencia) / dividendo);
        n++;
        PI = sumatoria*4;    
   } while (PI == 3,141592);
   
    cout<< "El valor de π es = " << PI << endl; 
    cout<< "El valor de π en Serie de Leibniz es = " << sumatoria << endl;
}
