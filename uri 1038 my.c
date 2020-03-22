#include<stdio.h>


int main()
{
    int n,m;
    float a[5];
    a[1] = 4.00;
    a[2] = 4.50;
    a[3] = 5.00;
    a[4] = 2.00;
    a[5] = 1.50;

    scanf("%d %d",&n,&m);
    printf("Total: R$ %.2f",a[n]*m);

    return 0;

}
