#include"football.h"

DATE saisieDate(char msg[]){
    puts(msg);
    DATE d;
    do{
        printf("JOUR : "); scanf("%d",&d.j);
    }while(d.j<1 || d.j>31);
    do{
        printf("MOIS : "); scanf("%d",&d.m);
    }while(d.m<1 || d.m>12);
    do{
        printf("ANNEE : "); scanf("%d",&d.a);
    }while(d.a<1900 || d.a>2021);
    fflush(stdin);
    return d;
}

void afficheDate(DATE d, char msg[]){
    printf("%s : %d-%d-%d",msg,d.j,d.m,d.a);
}

JOUEUR saisieJoueur(void){
    JOUEUR j;
    printf("NOM : "); gets(j.nom);
    do{
        printf("NUMERO :"); scanf("%d",&j.numero);
    }while(j.numero<1 || j.numero>99);
    do{
        puts("Les postes sont : ");
        puts("1. GARDIEN");
        puts("2. DEFENSEUR");
        puts("3. MILIEU");
        puts("4. ATTAQUANT");
        puts("Faites votre choix !");
        scanf("%d",&j.poste);
    }while(!(j.poste>=1 && j.poste<=4));
    j.dateNaissance = saisieDate("DATE DE NAISSANCE");
    return j;
}

void afficheJoueur(JOUEUR j){
    printf("NOM : %s\n",j.nom);
    printf("NUMERO : %d\n",j.numero);
    switch(j.poste){
        case 1: puts("POSTE : GARDIEN"); break;
        case 2: puts("POSTE : DEFENSEUR"); break;
        case 3: puts("POSTE : MILIEU"); break;
        case 4: puts("POSTE : ATTAQUANT"); break;
    }
    afficheDate(j.dateNaissance, "DATE DE NAISSANCE");
}

void remplirTabJoueurs(JOUEUR tab[], int nbJ){
    int i;
    for(i=0; i<nbJ; i++){
        tab[i] = saisieJoueur();
    }
}

void afficheTabJoueurs(JOUEUR tab[], int nbJ){
    int i;
    for(i=0; i<nbJ; i++){
        afficheJoueur(tab[i]);
    }
}

CLUB saisieClub(void){
    CLUB c;
    printf("NOM : "); gets(c.nom);
    do{
        printf("BUDGET : "); scanf("%f",&c.budget);
    }while(c.budget<500000);
    do{
        printf("NOMBRE DE JOUEURS : "); scanf("%d",&c.nbJ);
    }while(c.nbJ<1 || c.nbJ>26);
    remplirTabJoueurs(c.T, c.nbJ);
    return c;
}

void afficheClub(CLUB c){
    printf("NOM : %s\n",c.nom);
    printf("BUDGET : %.2f\n",c.budget);
    printf("NOMBRE DE JOUEURS : %d\n",c.nbJ);
    afficheTabJoueurs(c.T, c.nbJ);
}

void remplirTabClubs(CLUB T[]){
    int i;
    for(i=0; i<2; i++){
        T[i] = saisieClub();
    }
}

void afficheTabClubs(CLUB T[]){
    int i;
    for(i=0; i<2; i++){
        afficheClub(T[i]);
    }
}
STADE saisieStade(void){
    STADE s;
    printf("NOM : "); gets(s.nom);
    s.dateCreation = saisieDate("DATE DE CREATION");
    do{
        printf("NOMBRE DE PLACES : ");
        scanf("%d",&s.nbPlaces);
    }while(s.nbPlaces<=0);
    return s;
}

void afficheStade(STADE s){
    printf("NOM : %s\n",s.nom);
    afficheDate(s.dateCreation, "DATE DE CREATION");
    printf("NOMBRE DE PLACES : %d\n",s.nbPlaces);
}

RENCONTRE saisieRencontre(void){
    RENCONTRE r;
    r.dateR = saisieDate("DATE DE RENCONTRE");
    r.stade = saisieStade();
    r.clubs[0] = saisieClub();
    r.clubs[1] = saisieClub();
    do{
        printf("SCORE 1 : ");
        scanf("%d",&r.score1);
    }while(r.score1<0);
    do{
        printf("SCORE 2 : ");
        scanf("%d",&r.score2);
    }while(r.score2<0);
    return r;
}

void afficheRencontre(RENCONTRE r){
    afficheDate(r.dateR, "DATE DE RENCONTRE");
    afficheStade(r.stade);
    afficheClub(r.clubs[0]);
    afficheClub(r.clubs[1]);
    printf("SCORE 1 : %d\n",r.score1);
    printf("SCORE 2 : %d\n",r.score2);
}

void remplirTabRencontres(RENCONTRE T[], int N){
    int i;
    for(i=0; i<N; i++){
        T[i] = saisieRencontre();
    }
}

void afficheTabRencontres(RENCONTRE T[], int N){
    int i;
    for(i=0; i<N; i++){
        afficheRencontre(T[i]);
    }
}


