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
              if(t[i]==t1[i])
                printf("[%d] \t",t1[i]);
             }






}



