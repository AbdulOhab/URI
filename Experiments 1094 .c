#include<stdio.h>

int main()
{

    int n,i,j,s,k=0,l=0,y=0,u=0;
    char e;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c",&s,&j);
        k=k+s;
        if(j =='C')
        {
        l=l+s;
        }
        else if(j == 'R')
        {
         y = y+s;
        }
        else if(j == 'S')
        {
        u=u+s;
        }
    }
    printf("Total: %d cobaias\n",k);
    printf("Total de coelhos: %d\n", l);
    printf("Total de ratos: %d\n", y);
    printf("Total de sapos: %d\n", u);
    printf("Percentual de coelhos: %.2f %\n", (float)l* 100.0 / k);
    printf("Percentual de ratos: %.2f %\n", (float)y * 100.0 / k);
    printf("Percentual de sapos: %.2f %\n", (float)u* 100.0 / k);

}

