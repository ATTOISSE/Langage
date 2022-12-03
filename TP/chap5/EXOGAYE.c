#include<stdio.h>

typedef struct
{
   int j,m,a;
}DATE;


typedef struct
{
   char code[10];
   char nom[30];
   char prenom[50];
   DATE dateemb;
   int salaire;
}EMPLOYE;

main()
{
    int i,j,a,n,cpt,cpt1,cpt2;
    float sb;
    char p[3];

    do
    {
        puts("Donner le nombre d'EMPLOYE");
        scanf("%d",&n);
    }while(n<=0);
    fflush(stdin);
   EMPLOYE mat[n][n];

    for(i=0;i<n;i++)
    {
        cpt=0;
        cpt1=0;
        cpt2=0;
        for(j=0;j<n;j++)
        {
            puts("donner le nom");
            gets(mat[i][j].nom);
             for(a=0; a<strlen(mat[i][j].nom); a++){
            mat[i][j].nom[a] = toupper(mat[i][j].nom[a]);
             }
            puts("donner le prenom");
            gets(mat[i][j].prenom);
            mat[i][j].prenom[0]= toupper(mat[i][j].prenom[0]);

            fflush(stdin);

            do
            {
                puts("donner la salaire ");
                scanf("%d",&mat[i][j].salaire);
            }while(mat[i][j].salaire<=0);

             do{
            puts("Donner le jour de fabrication du telephone");
            scanf("%d",&mat[i][j].dateemb.j);
        }while(mat[i][j].dateemb.j<1 || mat[i][j].dateemb.j>31);
        do{
            puts("Donner le mois de fabrication du telephone");
            scanf("%d",&mat[i][j].dateemb.m);
        }while(mat[i][j].dateemb.m<1 || mat[i][j].dateemb.m>12);
        do{
            puts("Donner l'annee de fabrication du telephone");
            scanf("%d",&mat[i][j].dateemb.a);
        }while(mat[i][j].dateemb.a<1900 || mat[i][j].dateemb.a>2021);
        fflush(stdin);

        strncpy(p,mat[i][j].nom,2);

        sscanf(mat[i][j].code,"%c-%s-%d",mat[i][j].prenom[0],p,mat[i][j].salaire/1000);

        if(2021-mat[i][j].dateemb.a>7)
        {
            cpt++;
        }
        sb=mat[i][j].salaire+0.05;

        if(strcasecmp(mat[i][j].nom,"ndiaye")==0 && sb>75000)
            cpt1++;
        if(mat[i][j].salaire>=25000 && mat[i][j].salaire<=50000 && strlen(mat[i][j].nom)==strlen(mat[i][j].prenom))
            cpt2++;
            if(i==j)
                mat[i][j].nom =="GAYE";

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("le code : %s",mat[i][j].code);
            printf("le nom: %s",mat[i][j].nom);
            printf("le prenom: %s",mat[i][j].prenom);
            printf("le jour: %d",mat[i][j].dateemb.j);
            printf("le mois: %d",mat[i][j].dateemb.m);
            printf("l'annee: %d",mat[i][j].dateemb.a);
            printf("le salaire : %d",mat[i][j].salaire);


        }
    }
    printf("il ya %d employe ayant une anciennete plus de 7ans",cpt);
    printf("la moyenne : %.2f",(float) cpt1/n);
    printf("le POURCENTAGE : %.2f%",(float) cpt2*100/n);
}
