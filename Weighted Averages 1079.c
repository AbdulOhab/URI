#include<stdio.h>
int main ()
{
    int i,a;
    double h,b,c,d,x,y;

    scanf("%d",&i);
    for(a=0; a<=i; a++)
    {
        scanf("%lf %lf %lf",&h,&b,&c);
        d=((h*2.0)+(b*3.0)+(c*5.0));
        y=d/10.0;
        printf("%.1lf\n",y);
    }
    return 0;
}


