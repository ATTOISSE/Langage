#include<stdio.h>
#define VIDER fflush(stdin);
struct ETUDIANT
{
    char nom[30];
    char prenom[19];
    int matricule;
    float moyenne;
}E,max,min;
int main (void)
{
    int i,k;


    do
    {
        puts("donner le nombre de valeur de la serie");
        scanf("%d",&k);
    }while(k<=0);
    VIDER
    for(i=1;i<=k;i++)
    {
        puts("donner le nom");
        gets(E.nom);
        puts("donner le prenom");
        gets(E.prenom);

        puts("donner le matricule");
        scanf("%d",&E.matricule);
        do{
        puts("donner la moyenne");
        scanf("%f",&E.moyenne);
        }while(E.moyenne<0 || E.moyenne>20);
        if(i==1)
        {
            max=E;
            min=E;
        }
        else if(min.moyenne>E.moyenne)
        {
            min=E;


        }
        else if(max.moyenne<E.moyenne)
        {
            max=E;


        }
        VIDER
        system("pause");
        system("cls");
    }

        puts("les inforamtions de l'etudiant qui a eu la plus grande moyenne sont:");

        printf("le nom de l'etudiant est %s \n",max.nom);
        printf("le prenom de l'etudiant est %s \n",max.prenom);
        printf("le matricule de l'etudiant est %d \n",max.matricule);
        printf("la moyenne de l'etudiant est %.2f \n\n",max.moyenne);

        puts("les inforamtions de l'etudiant qui a eu la plus petite moyenne sont:");

        printf("le nom de l'etudiant est %s \n",min.nom);
        printf("le prenom de l'etudiant est %s \n",min.prenom);
        printf("le matricule de l'etudiant est %d \n",min.matricule);
        printf("la moyenne de l'etudiant est %.2f \n",min.moyenne);



     getch();
    return 0;

}
