#include<stdio.h>

int main()
{

    int n,i,j,s,k=0,l=0;

    for(i=1; i<=100; i++)
    {
        scanf("%d",&s);
        k++;
        if(s>l)
        {
            j=k;
            l=s;
        }
    }
    printf("%d\n",l);
    printf("%d\n",j);

}


