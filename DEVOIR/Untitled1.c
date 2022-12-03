#include<stdio.h>
main()
{
    int t[5]={1,2,3,4,5},*p,i;
    p=t;
    puts("affichage");
    for(i=0;i<5;i++)
    {
        printf("%d \t",*(p+i));
    }
    /* syntaxe de malloc
    type *nompointeur = (type*) malloc([nb*]sizeof(type)); nb:c'est facultatif

    ex: int *x=(int*) malloc(sizeof(int));
        float *y = (float*) malloc(15* sizeof(float));

        struct PERSONNE{

        char *nom, *prenom;
        int *age
        };
        struct PERSONNE *p;

        p=(struct PERSONNE*) malloc (sizeof(struct PERSONNE));



        p-->nom:permet d'avoir acces à la valeur nom;
        p-->nom(char*)malloc(25*sizeof(type));


        int **mat = (int**) malloc (nbl*sizeof(int*));
        for(i=0;i<nbl;i++)
        {
            mat[i]=(int*) malloc (nbc*sizeof(int));
            for(j=0;j<nbc;j++)
            {

            }
        }

      **********************  APPLICATION ************************

        Ecrire un programme qui permet de remplir un tabledau de N personne et de l'afficher.
        NB: on utilise que des pointeurs.*/




}
