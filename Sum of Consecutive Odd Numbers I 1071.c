#include<stdio.h>

int main()
{
    int x,y,i;
    scanf("%d",&x);
    scanf("%d",&y);

    int sum=0;
    if(x>y)
    {
        int temp =y;
        y=x;
        x=temp;
    }


    for(i=x+1; i<y; i++)
    {
        if(i&1)
            sum+=i;

    }
    printf("%d\n",sum);

    return 0;
}
