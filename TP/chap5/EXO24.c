#include<stdio.h>
main()
{
    char t[5]={'a','y','e','u','i'};
    char t1[5]={'a','t','g','u','h'};
    int i,j,cpt=5,verif;


    for(i=0;i<5;i++)
    {
        printf("[%d] \t",t[i]);

    }

     puts("");
     for(i=0;i<5;i++)
    {
           printf("[%d] \t",t1[i]);
    }
                    puts(" \n les caractere de difference sont: ");
   puts("");
         for(i=0;i<5;i++)

            {
               verif=0;
               for(j=0;j<5;j++)
               {
                   if(t[i]!=t1[j] && t1[j]!=t[i])
                    verif++;
               }

               if(verif==cpt)
                {
                    printf("*%d* \t",t[i]);
                    printf(" '%d' \t",t1[i]);
                }
             }
             puts("\n [*]: les caractere qui sont dans t1 et non dans t2");
             puts(" ['']: les caractere qui sont dans t2 et non dans t1");





}


