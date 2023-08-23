#include <iostream>
#include <cmath>  // Cambiado "math.h" por "cmath"

using namespace std;

int main() {
    double n = 0;
    double potencia = 0;
    double sumatoria = 0;
    double PI = 0;

    do {
        //CREAR POTENCIA
        double numero = -1;
        potencia = pow(numero, n);

        //CREAR DIVIDENDO
        double dividendo = ((2 * n) + 1);  // Movido el cálculo del dividendo aquí

        //RESULTADO SUMATORIA
        sumatoria = sumatoria + ((potencia) / dividendo);  // Corregido para no declarar una nueva variable

        n++;
        PI = sumatoria * 4;
    } while (abs(PI - 3.141592) >= 1e-9);  // Cambiado la condición de igualdad por una aproximación

    cout << "El valor de π es = " << PI << endl;
    cout << "El valor de π en Serie de Leibniz es = " << sumatoria << endl;
}
