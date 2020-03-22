#include <stdio.h>
int main()
{
    int i,j,n;
    for(i=1; i<=9; i++)
    {
        for(n=1,j=7; n<=3; n++,j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
    return 0;
}
