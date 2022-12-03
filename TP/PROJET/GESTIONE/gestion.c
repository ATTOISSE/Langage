
#include<stdio.h>
#include"gestion.h"

ETUDIANT scanEtudiant( )
{
    ETUDIANT E;
    puts("Donner le nom");
    gets(E.nom);
    puts("Donner le prenom");
    gets(E.prenom);
    fflush(stdin);
    do
    {
        puts("Entrer la moyenne");
        scanf("%f",&E.moyenne);
    }while(E.moyenne<0 || E.moyenne>20);
    fflush(stdin);
    return E;
}

void printEtudiant(ETUDIANT E)
{
    printf("[%s] - [%s] - [%.2f] \n",E.prenom,E.nom,E.moyenne);
}

void remplirTabEtu(ETUDIANT T[ ], int N)
{
    int i;
    for(i=0;i<N;i++){
        T[i]=scanEtudiant();
    }
}

void ordreDeMerite(ETUDIANT T[ ], int N)
{
    int i,j;
    ETUDIANT et;
    for(i=0;i<N-1;i++){
            for(j=i+1;j<N;j++){
                if(T[i].moyenne<T[j].moyenne){
                    et=T[i];
                    T[i]=T[j];
                    T[j]=et;
                }
            }
    }
}



ETUDIANT premier(ETUDIANT T[ ], int N)
{
    return T[0];
}

ETUDIANT premier_bis(ETUDIANT T[ ], int N)
{
    int i;
    ETUDIANT max=T[0];
    for(i=1;i<N;i++){
                if(T[i].moyenne>max.moyenne){
                    max=T[i];

            }
    }
    return max;
}

ETUDIANT dernier(ETUDIANT T[ ],int N)
{
    return T[N-1];
}

ETUDIANT dernier_bis(ETUDIANT T[ ], int N)
{
    int i;
    ETUDIANT min=T[0];
    for(i=1;i<N;i++){
                if(T[i].moyenne<min.moyenne){
                    min=T[i];

            }
    }
    return min;
}

void afficheTabEtu(ETUDIANT T[ ],int N)
{
    int i;
    for(i=0;i<N;i++){
        printEtudiant(T[i]);
    }
}

CLASSE scanClasse(void)
{
    CLASSE cl;
    puts("Donner le libelle");
    gets(cl.libelle);
    fflush(stdin);
    do{
        puts("Donner l'effectif");
        scanf("%d",&cl.effectif);
    }while(cl.effectif<0 || cl.effectif>100);
    fflush(stdin);
    remplirTabEtu(cl.T,cl.effectif);
    return cl;
}
void printClasse(CLASSE cl){
    printf("LIBELLE : %s\n",cl.libelle);
    printf("EFFECTIF : %d\n",cl.effectif);
    puts("Les etudiants sont :");
    afficheTabEtu(cl.T,cl.effectif);
}

void principale(void)
{
   /* CLASSE c = scanClasse();
    ordreDeMerite(c.T,c.effectif);
    printClasse(c);
    puts(" ");
    puts("Les informations du premier de la classe");
    printEtudiant(premier(c.T,c.effectif));
    puts(" ");
    puts("Les informations du dernier de la classe");
    printEtudiant(dernier(c.T,c.effectif));*/

    int n=2;
    ETUDIANT T[n];
    remplirTabEtu(T,n);
    afficheTabEtu(T,n);
}
