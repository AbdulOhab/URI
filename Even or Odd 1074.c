#include<stdio.h>
int main()
{
    int a,i,b;

    scanf("%d",&a);

    for(i=0; i<=a; i++)
    {
        scanf("%d",&b);

        if (b==0)
            printf("NULL");
        else if(b<=0 && b%2==0)
            printf("EVEN NEGATIVE");
        else if(b<=0 && b%2==-1)
            printf("ODD NEGATIVE");
        else if(b>=0 && b%2==0)
            printf ("EVEN POSITIVE\n");
        else if(b>=0 && b%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;

}
