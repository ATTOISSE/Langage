#define FOND_DE_CAISSE 5000

typedef struct{
    int s, mn, h, j, m, a;
}DATE;
typedef struct{
    char nin[6];
    char nom[30];
    char prenom[50];
    char telephone[10];
    char adresse[50];
    int etat;
}CLIENT;
typedef struct{
    char numCpte[10];
    DATE dateCreation;
    int solde;
    CLIENT client;
    int etat;
}COMPTE;
typedef struct{
    char numOp[10];
    DATE dateOp;
    int montant;
    int typeOp;
    COMPTE compte;
    int etat;
}OPERATION;

int isNumeric(char);
int isStringNumeric(char[]);
int isNetworkValid(char[]);
int isPhoneValid(char[]);
int isNinExist(char[]);
int isPhoneExist(char[]);
int menu1(void);
int menu2(void);
CLIENT scanClient(void);
void printClient(CLIENT);
CLIENT getClient(char[]);
DATE dateHeureSystem(void);
void printDate(DATE, char[]);
int searchCompte(char[]);
COMPTE createCompte(void);
COMPTE getCompte(char[]);
void printCompte(char[]);
void printAllComptes(void);
int verifSolde(char[]);
int versement(char[], int);
int retrait(char[], int);
int virement(char[], char[], int);
int fermerCompte(char[]);
void printOperation(char[]);
void printAllOperations(char[]);
