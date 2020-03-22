#include <stdio.h>
  int main()
  {
        double income, tax,a;
        scanf("%lf", &income);
        if (income>=0.00 && income<=2000.0)

        {

                printf("Isento");

        }
        else if(income>=2000.01 && income<=3000.00)
        {
                income-=2000;
                tax=(income*.08);
                printf("R$ %.2lf ",tax);

        }
        else if(income>=3000.01 && income<=4500.00)
        {
            income-=3000;
                tax=(income*.18)+80;
                printf("R$ %.2lf ",tax);

        }
        else if(income>=4500.00)
        {
                income-=4500;
                tax=(income*.28)+350;
                printf("%R$ %.2lf ",tax);

        }

return 0;
  }
