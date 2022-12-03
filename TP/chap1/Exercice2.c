
#include<stdio.h>
#include<math.h>
#define pi 3.14

void main()
{
  float r,p,s,d;
  printf("entrez un nombre: "); scanf("%f",&r);
  p=2*r*pi;
  printf("le perimetre est %.2f \n",p);
  d=2*r;
  printf("le diametre est %.2f \n",d);
  s=pi*pow(r,2);
  printf("la surface est %.2f \n",s);
  printf("\n **** FIN DU PROGRAMME ****\n");
    getch();
}


