#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>


//CONSTANTTES
#define cls system("cls");
#define pause system("pause");
#define vider fflush(stdin);


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
}USERS;


typedef struct{
    int id,nbreElement;
    char numero[20];
    ARTICLE tabproduits;
    int montants;
    USERS infoUsers;
}VENTE;




//DECLARATION DES VAIABLES SUPER GLOBALES
USERS Users,Session;
VENTE  vente;
ARTICLE article;
CATEGORIE categori;
Date date;
int cpt_user=0,cpt_cat=0,finMontant=0,nbPro=0;

void gotoxy(int i, int j)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c;

    c.X=i;
    c.Y=j;
    SetConsoleCursorPosition(h,c);
}

void color(int col)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,(WORD)col);
}



//_______________________________________________________



void connexion(){
    puts("\n\n\n\n\n\n\n \t\t\t\t VEUILLEZ AGRANDIR l'ECRAN POUR UNE BONNE PRESENTATION !!!\n\n\n");
    pause

    //system pour agrandir l'interface de compilation
    system("mode con LINES=39 COLS=170");
    FILE *fichuser = NULL;
    char login[30],mdp[30],okLogin[20],verife[20];
    int trouve=0;

      //ma page de connexion
    do{
            cls
            printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°° PAGE DE CONNEXION °°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²² LOGIN :                                              ²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²² MOT DE PASSE :                                       ²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²²°°°°°°                                      °°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");

      //les deux gotoxy pour l'emplacement du curseur
    gotoxy(50,5);
    gets(login);
    gotoxy(83,8);
   gets(mdp);
    fichuser = fopen("USERS","rb");
    if(fichuser){
        while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser)){
            if(strcasecmp(Users.login,login)==0&&strcasecmp(Users.mdp,mdp)==0){

                strcpy(Session.nom,Users.nom);
                strcpy(Session.prenom,Users.prenom);
                strcpy(Session.tel,Users.tel);
                strcpy(Session.mdp,Users.mdp);
                strcpy(Session.login,Users.login);
                trouve=1;
                if(Users.etat == 0){
                    nouveau_mdp();
                }
                pause

            }
        }
        if (trouve==0)
        {
            gotoxy(75,11);
            printf("LOGIN OU MOT DE PASSE INCORRECT");
            gotoxy(72,14);
            pause
        }
    }fclose(fichuser);
}while(trouve!=1);
}

void nouveau_mdp(){
   FILE *fichuser = NULL;
   char mdp[20],confirme[20];
   fichuser = fopen("USERS","r+b");
   if(fichuser){
                    while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser)){
                        if(strcasecmp(Users.login,Session.login)==0&&strcasecmp(Users.mdp,Session.mdp)==0){
                            break;
                        }
                    }
                    cls
                    gotoxy(65,8);
                    printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
                    printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
                    printf("\n\t\t\t\t²²² BIENVENU DANS VOTRE PREMIERE CONNECTION %s %s VEILLIEZ CHANGE VOTRE MOT DE PASSE SVP                ²²²",Session.prenom,Session.nom);
                    printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
                    printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
                                                            gotoxy(72,25);
                    pause
                    do{
                            cls
            printf("\n\t\t\t\t\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°° PAGE DE CONNEXION °°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²² NOUVEAU MOT DE PASSE :                               ²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²² CONFIRMATION :                                       ²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²                                                      ²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
                     gotoxy(91,5);
                    gets(mdp);
                    gotoxy(83,8);
                    gets(confirme);
                    if(strcasecmp(Session.mdp,mdp)==0){
                            gotoxy(70,10);
                        printf("LE MOT DE PASSE DOIT ETRE DIFFERENT DU PRECEDENT.");
                             gotoxy(94,16);
                        pause
                    }else if(strcasecmp(mdp,confirme)!=0){
                              gotoxy(85,10);
                        printf("CONFIRMATION INCORRECT");
                              gotoxy(60,16);
                        pause
                    }

                    }while(strcasecmp(Session.mdp,mdp)==0||strcasecmp(mdp,confirme)!=0);

                    //fseek: Cette fonction permet d'effectuer la position du pointeur de fichier.
                    fseek(fichuser,-1l*sizeof(Users),SEEK_CUR);
                    strcpy(Users.mdp,mdp);
                     Users.etat = 1;
                     fwrite(&Users,sizeof(Users),1,fichuser);
                     gotoxy(60,16);
                     printf("MOT DE PASSE MODIFIER AVEC SUCCES");
                     gotoxy(60,19);
                                   pause
   }fclose(fichuser);

}


main()
{
    connexion();
}

