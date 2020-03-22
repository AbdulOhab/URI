#include <stdio.h>
#include <string.h>
int main()
{
   /* char c1[]="vertebrado",char a1[]="invertebrado";
    char c11[]="ave", c12[]="mamifero",a11[]="inseto", a12[]="anelideo";
    char c111[]="carnivoro", c112[]="onivoro",a111[]="herbivoro",a112[]="hematofago";
    char b11[]="aguia", b2[]="pomba",b3[]="homem", b4[]="vaca",5[]="pulga", b6[]="lagarta", b7[]="sanguessuga", b8[]="minhoca";*/

    char d[100], e[100], f[100];

   gets(d);
   gets(e);
   gets(f);

    if(strcmp(d,"vertebrado")==0)

    {
       if(strcmp(e,"ave")==0)
        {

            if(strcmp(f,"carnivoro")==0)

                printf("aguia\n");

            else if(strcmp(f,"onivoro")==0)

                printf("pomba\n");

        }
         else if(strcmp(e,"mamifero")==0)
            {

                if(strcmp(e,"onivoro")==0)

                    printf("homem\n");

                else if(strcmp(e,"herbivoro")==0)

                    printf("vaca\n");

            }
    }

 else if(strcmp(d,"invertebrado")==0){

        if(strcmp(e,"inseto")==0){

            if(strcmp(f,"herbivoro")==0)

                printf("lagarta\n");

            else if(strcmp(f,"hematofago")==0)

                printf("pulga\n");

        }

        else if(strcmp(e,"anelideo")==0){

                if(strcmp(f,"onivoro")==0)

                    printf("minhoca\n");

                else if(strcmp(f,"hematofago")==0)

                    printf("sanguessuga\n");

        }

    }

   return 0;

}
