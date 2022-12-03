void factoriel(void);

typedef struct
{
    char nom[30];
    char prenom[25];
    float moy;
}ETUDIANT;

ETUDIANT scanfEudiant(void);
void printfEtudiant (ETUDIANT);
