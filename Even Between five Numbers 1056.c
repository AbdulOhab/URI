
#include <stdio.h>
int main()
{
    int a,x,y=0;
    for(x=1;x<=5;x++)
    {
        scanf("%d", &a);
        if(a>=0)
        {
           a=a-a;
        }
        if(a%2==0)
        {
           y++;
        }
    }
    printf ("%d valores pares\n",y);
    return 0;
}

