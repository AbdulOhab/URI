#include <stdio.h>
int main()
{
    int a,x,y=0,b=0,c=0,d=0;
    for(x=1; x<6; x++)
    {
        scanf("%d", &a);
        if(a%2==0)
        {
            y++;
        }
        if(a%2)
        {
            b++;
        }

        if(a>0)
        {
            c++;
        }
        if(a<=0)
        {
            d++;
        }

    }
    printf ("%d valor(es) par(es)\n",y);
    printf ("%d valor(es) impar(es)\n",b);
    printf ("%d valor(es) positivo(s)\n",c);
    printf ("%d valor(es) positivo(s)\n",d);

    return 0;
}
/*#include <stdio.h>

int main()
{
 int n, i;
 int pos = 0, neg = 0, par = 0, im = 0;

 for(i = 0; i < 5; ++i)
 {
  scanf("%d", &n);
  if(n > 0){
   pos++;
  }else{
   if(n != 0){
    neg++;
   }
  }

  if(n % 2 == 0){
   par++;
  }else{
   im++;
  }
 }

 printf("%d valor(es) par(es)\n", par);
 printf("%d valor(es) impar(es)\n", im);
 printf("%d valor(es) positivo(s)\n", pos);
 printf("%d valor(es) negativo(s)\n", neg);

 return 0;
} /*




