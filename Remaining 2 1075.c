#include<stdio.h>
int main()
{
    int a,i;

    scanf("%i",&a);

    for(i=1; i<=10000; ++i)
    {
        if(i%a==2)
            printf ("%i\n",i);
    }
    return 0;

}
