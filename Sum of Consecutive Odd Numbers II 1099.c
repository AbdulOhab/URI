#include<stdio.h>
main()
{
    int n, x,y, sum=0, i,j,k;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            for(j=x+1; j<y; j++)
            {
                if(j%2!=0)
                    sum+=j;
            }
        }
        else if(x>y)
        {
            for(k=y+1; k<x; k++)
            {
                if(k%2!=0)
                    sum+=k;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
}
