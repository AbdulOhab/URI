#include <stdio.h>

int main() {
double A,B,C,pi=3.14159;
scanf("%lf %lf %lf",&A,&B,&C);
printf("TRIANGULO: %.3lf\n",(.5*A*C));
printf("CIRCULO: %.3lf\n",(pi*C*C));
printf("TRAPEZIO: %.3lf\n",(((A+B)/2)*C));
printf("TRAPEZIO: %.3lf\n",(B*B));
printf("QUADRADO: %.3lf\n",(B*B));
printf("RETANGULO: %.3lf\n",(A*B));
return 0;
}
