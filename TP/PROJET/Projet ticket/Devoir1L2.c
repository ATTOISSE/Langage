#include<stdio.h>
typedef struct{
    int h,m,s;
}HEURE;
typedef struct{
    int id;
    char arrerDebut[25];
    char arretFin[25];
    int montant;
    HEURE heureAchat;
    HEURE heureDesc;
    HEURE duree;
}TICKET;
void afficherArrets(void);
int saisirArret(void);
TICKET saisirTicket(void);
main(){
    saisirArret();
}
TICKET saisirTicket(void){

    TICKET t;
    FLUSH;
    t.id = ++id_auto;//Generer l'id
    return t;
}
int saisirArret(){
    int choix;
    FLUSH;
    afficherArrets();
    puts("Entrer votre choix :");
    scanf("%d",&choix);
}
