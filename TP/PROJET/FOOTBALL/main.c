#include<stdio.h>
#include"football.h"
int main()
{/*
    RENCONTRE T[] = {
        //Date de rencontre
        {
            11, 5, 1995
        },
        //Stade
        {
            "Andfield", {4,5,1902}, 35000
        },
        //Club 1
        {
            "Liverpool FC", 600000, 1, {"GAYE", 10, 4, {11,5,2000}}
        },
        //Club 2
        {
            "Manchester United", 550000, 1, {"ROONEY", 10, 4, {11,5,2000}}
        },
        //Score 1
        5,
        //Score 2
        0
    };

    puts("RENCONTRES DE LA 5e JOURNEE DE PREMIER LEAGUE");
    printf("%s %d - %d %s",
           T[0].clubs[0].nom,
           T[0].score1,
           T[0].score2,
           T[0].clubs[1].nom);

    /*
        Ecrire un programme qui permet de remplir
        un tableau de 5 rencontres et de l'afficher
        sous la forme suivante:


        RENCONTRES DE LA 5e JOURNEE DE PREMIER LEAGUE
        Liverpool FC   5 - 0    Manchester United
             Arsenal   1 - 1    Totthenam
             Chelsea   3 - 2    Everton
      Crystal Palace   0 - 2    Leceister
            West Ham   1 - 3    Manchester City
    */
    saisieClub();
  CLUB k = afficheClub();

    return 0;
}
