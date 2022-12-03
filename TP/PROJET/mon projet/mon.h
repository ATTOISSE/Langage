#include"biblio.h"

typedef struct{
    int j,m,a;
}Date;


typedef struct{
    int id,nbr_Element,liste;
    char libelle[30];
}CATEGORIE;


typedef struct{
    int prix,qteStock,liste;
    char designation[30],code[6];
    char categorie[30];
    char dateAjout[20];
}ARTICLE;


typedef struct{
    int id,etat,supAdmin,nbreElement;
    char nom[30],prenom[30],tel[20],fonct[20],bloque[20];
    char login[6],mdp[20];
     char mot[20];

}USERS;


typedef struct{
    int id,nbreElement;
    char numero[20];
    ARTICLE tabproduits;
    int montants;
    USERS infoUsers;
}VENTE;


USERS Users,Session;
VENTE  vente;
ARTICLE article;
CATEGORIE categori;
Date date;
int cpt_user=0,cpt_cat=0,finMontant=0,nbPro=0;

void ajoutUser();
void listUsers();
int isNumeric();
int isStringNumeric(char[]);
int isNetworkValid(char[]);
int isPhoneValid(char[]);
void gotoxy(int,int);
void color(int);
void connexion();
void deconnexion();
void nouveau_mdp();
void etatJournalier();
void Vente();
void bloque_debloque_users();
void ajoutCategorie();
void listCategories();
void ajoutArticle();
void listProduits();
void menuPrincipal();

