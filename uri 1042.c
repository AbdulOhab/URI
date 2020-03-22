
#include<stdio.h>

int main()

  {
      int a,b,c,g,m,s,tem;

      scanf("%d %d %d",&a,&b,&c);

      g=a;

      m=b;

      s=c;

     if(g<m)
     {
         tem=g;

         g=m;

         m=tem;
     }

     if(m<s)
     {
         tem=m;

         m=s;

         s=tem;
     }

     if (g < m)

    {

        tem = g;

        g = m;

        m = tem;

    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",s,m,g,a,b,c);

    return 0;

}
