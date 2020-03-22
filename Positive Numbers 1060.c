#include<stdio.h>
int main()
{
    int i,v=0;
    double n;

    for(i=1;i<=6;i++)
    {
        scanf("%lf",&n);

        if(n > 0)
        {
            v++;
        }

    }
     printf("%i valores positivos\n", v);
        return 0;
}
