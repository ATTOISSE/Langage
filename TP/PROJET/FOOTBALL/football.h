#include<stdio.h>
//STRUCTURES
typedef struct{
    int j,m,a;
}DATE;
typedef struct{
    char nom[30];
    int numero;
    int poste;
    DATE dateNaissance;
}JOUEUR;
typedef struct{
    char nom[30];
    float budget;
    JOUEUR T[100];
    int nbJ;
}CLUB;
typedef struct{
    char nom[30];
    DATE dateCreation;
    int nbPlaces;
}STADE;
typedef struct{
    DATE dateR;
    STADE stade;
    CLUB clubs[2];
    int score1, score2;
}RENCONTRE;

//PROTOTYPES
DATE saisieDate(char[]);
void afficheDate(DATE, char[]);
JOUEUR saisieJoueur(void);
void afficheJoueur(JOUEUR);
void remplirTabJoueurs(JOUEUR[], int);
void afficheTabJoueurs(JOUEUR[], int);
CLUB saisieClub(void);
void afficheClub(CLUB);
void remplirTabClubs(CLUB[]);
void afficheTabClubs(CLUB[]);
STADE saisieStade(void);
void afficheStade(STADE);
RENCONTRE saisieRencontre(void);
void afficheRencontre(RENCONTRE);
void remplirTabRencontres(RENCONTRE[], int);
void afficheTabRencontres(RENCONTRE[], int);
