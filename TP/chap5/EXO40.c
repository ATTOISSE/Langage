#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define AC 2021
struct DATE{
    int j, m, a;
};
struct ETUDIANT{
    char matricule[10];
    char nom[30];
    char prenom[50];
    struct DATE dateN;
    float moyenne;
};
main()
{
    int L,C,i,j,nbEt=0,k;
    char p[5];
    float moyenneGenerale=0;
    puts("Les dimensions de la matrice");
    do{
        puts("Donner le nombre de lignes de la matrice");
        scanf("%d",&L);
        puts("Donner le nombre de colonnes de la matrice");
        scanf("%d",&C);
    }while(L<=0 || C<=0);
    struct ETUDIANT mat[L][C];
    fflush(stdin);
    puts("Remplissage de la matrice");
    for(i=0;i<L;i++){
       for(j=0;j<C;j++){
        printf("Etudiant : %d\n",nbEt+1);
        puts("Donner le nom");
        gets(mat[i][j].nom);

     //   k=0;
//        while(mat[i][j].nom[k] != '\0'){
//            mat[i][j].nom[k] = toupper(mat[i][j].nom[k]);
//            k++;
//        }
        puts("Donner le prenom");
        gets(mat[i][j].prenom);
        mat[i][j].prenom[0] = toupper(mat[i][j].prenom[0]);
        do{
            puts("Donner le jour de naissance");
            scanf("%d",&mat[i][j].dateN.j);
        }while(mat[i][j].dateN.j<1 || mat[i][j].dateN.j>31);
        do{
            puts("Donner le mois de naissance");
            scanf("%d",&mat[i][j].dateN.m);
        }while(mat[i][j].dateN.m<1 || mat[i][j].dateN.m>12);
        do{
            puts("Donner l'annee de naissance");
            scanf("%d",&mat[i][j].dateN.a);
        }while(mat[i][j].dateN.a<1900 || mat[i][j].dateN.a>2021);
        do{
            puts("Donner la moyenne");
            scanf("%f",&mat[i][j].moyenne);
        }while(mat[i][j].moyenne<0 || mat[i][j].moyenne>20);
        fflush(stdin);
       strncpy(p, mat[i][j].prenom,2);
        p[1] = toupper(p[1]);
        p[2] = toupper(p[2]);


      if(strlen(mat[i][j].nom) >=3)
            sprintf(mat[i][j].matricule,"ET-%s-%c-%d",p,mat[i][j].nom[2],(AC-mat[i][j].dateN.a)%4);

        else
            sprintf(mat[i][j].matricule,"ET-%s-@-%d",p,(AC-mat[i][j].dateN.a)%4);
        moyenneGenerale += mat[i][j].moyenne;

       }
    }
    puts("Affichage de la matrice");
    for(i=0;i<L;i++){
       for(j=0;j<C;j++){
            printf("NOM : %s \n",mat[i][j].nom);
            printf("PRENOM : %s\n",mat[i][j].prenom);
            printf("DATE DE NAISSANCE : %d-%d-%d\n",mat[i][j].dateN.j,mat[i][j].dateN.m,mat[i][j].dateN.a);
            printf("MOYENNE : %.2f\n",mat[i][j].moyenne);
           printf("MATRICULE : %s\n",mat[i][j].matricule);
        }
        puts("****************************************");
    }
    moyenneGenerale = moyenneGenerale/(L*C);
    printf("MOYENNE GENERALE = %.2f",moyenneGenerale);
}
