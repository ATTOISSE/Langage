#include<stdio.h>

/* prototype des modules */
void menu (void);
int addition (int,int);
int difference (int,int);
int produit (int,int);
int division (int,int);
int modulo (int,int);
int choice(void);
void principal (void);
main()
{
    /* appel des module*/

    int x,y;

    puts("saisir une premiere");
    scanf("%d",&x);
     puts("saisir une deuxieme");
     scanf("%d",&y);

    menu();
   /* do
    {
       puts("fait un choix !");
       scanf("%d",&choix);
    }while(choix>=1 && choix <=5);*/
    switch(choice()){

    case 1: printf("somme = %d",addition(x,y));break;
    case 2: printf("difference = %d",difference(x,y));break;
    case 3: printf("produit = %d",produit(x,y));break;
    case 4:
    if(y==0)
        puts("impossible de diviser pae zero");
    else
    {
       printf("division = %d",division(x,y));break;

    }
    case 5:
         if(y==0)
        puts("impossible de diviser pae zero");
    else
    {
       printf("modulo = %d",modulo(x,y));break;

    }

  }
}
/* definition des modules */
void menu (void){

puts("1.addition");
puts("2.difference");
puts("3.produit");
puts("4.division");
puts("5.modulo");
}

int addition(int a,int b){return a+b;}
int difference(int a,int b){return a-b;}
int produit(int a,int b){return a*b;}
int division(int a,int b){return a/b;}
int modulo(int a,int b){return a%b;
}
int choice (void)
{
    int choix;
     do
    {
       puts("fait un choix !");
       scanf("%d",&choix);
    }while(!(choix>=1 && choix <=5));
}

