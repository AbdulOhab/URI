#include<stdio.h>
int main()
{
char employee;
double a,b,c;
scanf("%s %lf %lf ",&employee ,&a,&b);
c=a+(b*15)/100;
printf("TOTAL = R$ %f\n",c);
return 0;
}
