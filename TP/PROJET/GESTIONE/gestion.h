
typedef struct
{
    char nom[30],prenom[50];
    float moyenne;
}ETUDIANT;
typedef struct
{
    char libelle[20];
    int effectif;
    ETUDIANT T[100];
}CLASSE;
ETUDIANT scanEtudiant(void);
void printEtudiant(ETUDIANT);
void remplirTabEtu(ETUDIANT[ ], int);
void ordreDeMerite(ETUDIANT [ ],int);
ETUDIANT premier(ETUDIANT [ ],int);
ETUDIANT premier_bis(ETUDIANT [ ],int);
ETUDIANT dernier(ETUDIANT [ ],int);
ETUDIANT dernier_bis(ETUDIANT [ ],int);
void afficheTabEtu(ETUDIANT [ ],int);
CLASSE scanClasse(void);
void printClasse(CLASSE);
