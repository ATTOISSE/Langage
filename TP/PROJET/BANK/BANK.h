#define FOND_DE_CAISSE 5000

typedef struct
{

    int j,m,a,h,mn,s

}DATE;
typedef struct
{
    char nin [6];
    char nom [30];
    char prenom [25];
    char telephone [10];
    char adresse [15];
    int etat;
}CLIENT;

typedef struct
{
     char Numero[10];
     DATE Datecreation;
     CLIENT Client;
     int solde;
     int etat;

}COMPTE;

typedef struct
{
    char numOP[10];
    int montant,typeOp;//virement, retrait,versement
    DATE dateOp;
    COMPTE compte;
    int etat;
}OPERATION;


//prototype

int isNumeric(char[]);// verifie si c un nbre
int isStringNumeric(char[]);// verifie si tt les caracteres sont un nbre
int isNetworkValid(char[]);// si il commence par qlq chose(77 OU 78)
int isPhoneValid(char[]);// si le num est valide
int isNinExist(char[]);// si le nin existe
int isPhoneExist(char[]);// verifie si le num existe
int menu1(void)
int menu2(void);
CLIENT scanClient (void);
void printClient (CLIENT);
int seachCompte(char[]);
int isClose(char[]);
COMPTE creatCompte(void);
void printCompte (char[]);
void printAllCompte (char[]);
int verifSolde(char[]);
int versement(char[],int);
int retrait(char[],int);
int virement(char[],char[],int);
int fermerCompte(char[]);
void printAllOperationsByNumCompte(char[]);
void printAllOperationsByDate(char[],DATE);


