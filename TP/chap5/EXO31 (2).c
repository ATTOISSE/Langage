#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100
typedef struct{
    int j,m,a;
}DATE;
typedef struct{
    char serie[10];
    char mark[20];
    char model[20];
    int prix;
    char pays[30];
    DATE dateFab;
}TELEPHONE;
main()
{
    TELEPHONE T[N], Tc[N], tel;
    int i=0, K, j=0, a;
    do{
       puts("Donner la serie du telephone");
       gets(tel.serie);
       if(strcmp(tel.serie, "#A0A#") != 0){
        puts("Donner la marque du telephone");
        gets(tel.mark);
        puts("Donner le modele du telephone");
        gets(tel.model);
        do{
            puts("Donner le prix du telephone");
            scanf("%d",&tel.prix);
        }while(tel.prix<=0);
        fflush(stdin);
        puts("Donner le pays de fabrication du telephone");
        gets(tel.pays);
        for(a=0; a<strlen(tel.pays); a++){
            tel.pays[a] = toupper(tel.pays[a]);
        }
        printf("pays : %s\n",tel.pays);
        do{
            puts("Donner le jour de fabrication du telephone");
            scanf("%d",&tel.dateFab.j);
        }while(tel.dateFab.j<1 || tel.dateFab.j>31);
        do{
            puts("Donner le mois de fabrication du telephone");
            scanf("%d",&tel.dateFab.m);
        }while(tel.dateFab.m<1 || tel.dateFab.m>12);
        do{
            puts("Donner l'annee de fabrication du telephone");
            scanf("%d",&tel.dateFab.a);
        }while(tel.dateFab.a<1900 || tel.dateFab.a>2021);
        fflush(stdin);
        T[i] = tel;
        i++;
       }
    }while(strcmp(tel.serie, "#A0A#") != 0);
    K=i;
    for(i=0; i<K; i++){
        if(strcmp(T[i].pays,"CHINE") == 0 &&
           T[i].dateFab.m == 5 &&
           T[i].dateFab.a == 2021 &&
           T[i].mark[0] == 'A' &&
           T[i].mark[strlen(T[i].mark)-1] == 'e'){
            Tc[j] = T[i];
            j++;
           }
    }
    puts("Tableau 1");
    for(i=0; i<K; i++){
        printf("TELEPHONE : %d\n",i+1);
        printf("SERIE : %s\n",T[i].serie);
        printf("MARQUE : %s\n",T[i].mark);
        printf("MODELE : %s\n",T[i].model);
        printf("PRIX : %d fcfa\n",T[i].prix);
        printf("PAYS DE FABRICATION : %s\n",T[i].pays);
        printf("DATE DE FABRICATION : %d - %d - %d\n",T[i].dateFab.j,T[i].dateFab.m,T[i].dateFab.a);
    }
    puts("Tableau 2");
    for(i=0; i<j; i++){
        printf("TELEPHONE : %d\n",i+1);
        printf("SERIE : %s\n",Tc[i].serie);
        printf("MARQUE : %s\n",Tc[i].mark);
        printf("MODELE : %s\n",Tc[i].model);
        printf("PRIX : %d fcfa\n",Tc[i].prix);
        printf("PAYS DE FABRICATION : %s\n",Tc[i].pays);
        printf("DATE DE FABRICATION : %d - %d - %d\n",Tc[i].dateFab.j,Tc[i].dateFab.m,Tc[i].dateFab.a);
    }
}
