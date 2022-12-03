#include<stdio.h>
#include<string.h>
struct PERSONNE
{
    char nom[25];
    char prenom[50];
    int age;
}p1={"ATTOISSE","MOHAMED",18};

main()
{
    struct PERSONNE p={"ATTOISSE","MOHAMED",20};
    struct PERSONNE p2;
    strcpy (p2.nom,"moussa");
    strcpy(p2.prenom,"ibrahim");
    p2.age=26;
    printf("%s %s et age %d \n",p1.nom,p1.prenom,p1.age);
    printf(" %s  %s et age %d",p2.nom,p2.prenom,p2.age);
    /* strlen=compte le nom de caractere; */
    getch();
}
