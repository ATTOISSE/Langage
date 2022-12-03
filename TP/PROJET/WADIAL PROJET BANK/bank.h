#define FOND_DE_CAISSE 5000
typedef struct{
    int j,m,a,h,mn,s;
}DATE;
typedef struct{
    char nin[6];
    char nom[25],prenom[50];
    char telephone[10];
    char adresse[50];
    int etat;
}CLIENT;
typedef struct{
    char numCom[10];
    DATE dateCreation;
    int solde;
    CLIENT client;
    int etat;
}COMPTE;
typedef struct{
    char numOp[10];
    int motant;
    DATE dateOp;
    int typeOp;
    COMPTE compte;
    int etat;
}OPERATION;


int isNumeric(char);
int isStringNumeric(char [ ]);
int isNetworkValid(char [ ]);
int isPhoneValid(char [ ]);
int isNinExist(char [ ]);
int isPhoneExist(char [ ]);
int menu1(void);
int menu2(void);
CLIENT scanClient(void);
void printClient(CLIENT);
DATE dateHeureSystem(void);
void printDate(DATE, char [ ]);
int searchCompte(char[]);
int isClose(char[]);
COMPTE createCompte(void);
void printCompte(char[]);
void printAllComptes(void);
int verifSolde(char[]);
int versement(char[] ,int);
int retrait(char[], int);
int virement(char[], char[], int);
int fermerCompte(char[]);
void printAllOperationsByNumCompte(char[]);
void printAllOperationsByDate(char[], DATE);


