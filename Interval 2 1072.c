#include<stdio.h>

int main()
{
    long int a,b,i;
    long int in =0;
    long int out=0;


    scanf("lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld",&b);
        if(b>=10 && b>=20)
            in++;
        else
            out++;
    }

    printf("%lld in\n", in);
    printf("%lld out\n", out);

    return 0;
}
