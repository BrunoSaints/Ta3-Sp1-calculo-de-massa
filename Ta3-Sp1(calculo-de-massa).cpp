#include <iostream>
#include <locale>
using namespace std;

float calcularMassa (float a, float b) {
    const float mA= 321.43;
    const float mB= 150.72;
        
    printf ("\n 1,2 : 1,0 : = %f", (1,2*mA + 1 * mB ));
    printf ("\n 1,4 : 1,0 : = %f", (1,4*mA + 1 * mB ));
    printf ("\n 1,0 : 1,6 : = %f\n", (1*mA + 1,6 * mB ));

    return (a * mA) + (b * mB);
}
int main (int argc, char** argv) {
setlocale(LC_ALL, "portuguese");

float a=0, b=0, resultado=0;

    printf ("\nDigíte as massas dos elementos A e B: ");
    scanf ("%f %f", &a, &b);

    resultado = calcularMassa(a,b);// parâmetros passados (a e b).

    printf ("\nResultado %f\n\n", resultado);
return 0;
}
