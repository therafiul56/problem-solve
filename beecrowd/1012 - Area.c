#include <stdio.h>
 #include<math.h>
int main() {
 
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,RETANGULO,QUADRADO;
    const double pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    TRIANGULO = (1/(double)2)*A*C;
    CIRCULO = pi*C*C;
    TRAPEZIO = 0.5 * (A + B) * C;
    QUADRADO = B * B;
    RETANGULO =A * B;
    
    
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);
return 0;
}
