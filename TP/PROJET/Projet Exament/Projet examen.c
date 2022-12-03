#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct date
{
   char j,m,a;
};

typedef struct
{
   char nom_cat;
   char libelle[100];
   int id;
}categorie;

typedef struct
{
    char designation[100];
    char code[7];
    int prix;
    int quantite;
    struct date D;
}article;

typedef struct
{
    char nom[30];
    char prenom[30];
    char login[100];
    int telephone;
    int id;
}users;

typedef struct
{
    char nom[30];
    char prenom[30];
    char mot_passe_admin[30];
    char log_admin[60];
    int telephone;
    int id_admin;
}ADMIN;

typedef struct
{
    char nom[30];
    char prenom[30];
    char mdpass[30];
    char log_uti[60];
    int numero;
    int id_uti;
}UTILIS;

int main()
{
    int n;
    ADMIN admin;
    FILE *fichier;
    puts("\t********************************************");
    puts("\t********************************************\n");
    printf("\t|*|*|* BIENVENU SUR GOOR FALL SHOP *|*|*|\n");
    puts("\t********************************************");
    printf("\t   ||***VOUS DEVAIS VOUS CONNECTER***||\n");
    puts("\t   ------------------------------------\n");
    printf("\t 1.En tant qu'Admin \n");
    puts("**************** OU *******************");
    printf("\t 2.En tant D'Utilisateur\n");
    puts("\t----------------------------");
         printf("Entrer Votre choix:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
         printf("\tVeuillez creez votre compte Admin\n");
         break;
    default:
        break;
        return 0;
    }
void connexion_admin(ADMIN admin);
{
    FILE *fichier;
    char login;
    char Mpass;
    int n,i;
    int max=999,min=666;
    int *MDP,nb_users;
    srand(time(NULL));
    admin.id_admin = (rand() % (max - min + 1)) + min;
    printf("\t-*-*-* Creation du compte Admin-*-*-*\n");
    puts("|||||||||||-------------------||||||||||||");
     printf("id :%d\n",&admin.id_admin);
    fflush(stdin);
    printf("\tEntrer le nom :");
    gets(admin.nom);
    printf("\tEntrer le prenom :");
    gets(admin.prenom);
    printf("\tEntrer le numero :");
    scanf("%d",&admin.telephone);
    fflush(stdin);
    printf("\tEntrer le login :");
    gets(admin.log_admin);
    printf("\t Entrer le mot de passe :");
    gets(admin.mot_passe_admin);
    puts("*******------------*********");
    printf("\t*-*-*Connexion de l'Admin*-*-*-*\n");
    puts("----************************----");
    printf("\t**Entrer le login:");
    scanf("%s",&login);

    while (strcmp(&login,admin.log_admin)!=0)
        {
            printf("\n LE LOGIN ET INCORRECT!! \n");
            printf("\t LE Login : ");
            scanf("%s",&login);
        }

    printf("\t Entrer le Mot de passe : ");
    scanf("%s",&Mpass);

        while (strcmp(&Mpass,admin.mot_passe_admin)!=0)
        {
            printf("Mot de passe incorrect !!!!\n");
            printf("\t Le mot de passe : ");
            scanf("%s",&Mpass);
        }
    printf("\t********CONNEXION REUSSITE*******\n");
    puts("\t**********************************");
}
        puts("************---------------******************");
        printf("\t**** LE MENU DU PROGRAMME ****\n");
        puts("*********************************************");
        printf("****** QUELLE TACHE SOUHAITER VOUS EFFCTUER ? ******\n");
        printf("\t1.** La liste des utilisateurs\n");
        printf("\t2.** L'ajout d'utilisateur\n");
        printf("\t3.** L'ajout de catégorie\n");
        printf("\t4.** L'ajout de projuit\n");
        printf("\t5.** Effectuer une vente\n");
        printf("\t6.** Imprimer l'etat d'aujourd'hui\n");
        printf("\t7.** Lister les produits\n");
        printf("\t8.** Liste des gategories\n");
        puts("*********************************************");
        scanf("%d",&n);
        switch(n){
    case 1:
        break;

    case 2:
        puts("*********************************************");
        printf("\t **En tant qu'Admin** \n");
        printf("\t Entrer le nombre d'utilisateur a cree\n");
        scanf("%d",&n);
        int n,i;
        UTILIS utilis;
        for(i=0;i<n;i++)
        {
            printf("\t Entrer le nom: ");
            fflush(stdin);
            gets(utilis.nom);
            printf("\t Entrer le prenom :");
            gets(utilis.prenom);
            printf("\t Entrer le numero de telephone :");
            scanf("%d",&utilis.numero);
            fflush(stdin);
            printf("\t Entrer le login :");
            gets(utilis.log_uti);
            printf("\t Entrer le mot de passe :");
            gets(utilis.mdpass);
            puts("-----------------------");
        }
        break;


    case 3:
        //code
        break;

    case 4:
        //code
        printf("****** Ajout d'Utilisateur ******\n\n");
        break;

    case 5:
            //code
        break;
    case 6:
        //code
        break;

    case 7:
        //code
        break;

    case 8:
        //code
        break;

        }
}

