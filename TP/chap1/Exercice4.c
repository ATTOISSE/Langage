#include<stdio.h>

void main()
{
    int a,b;
    int e;

    printf("donner une valeur : ");
    scanf("%d",&a);
    printf("donner une autre valeur : ");
    scanf("%d",&b);
    a=a;
    b=b;
    printf("Avant permitation,le 1er entier =%d et la 2eme =%d \n",a,b);
    e=a;
    a=b;
    b=e;
    printf("apres permitation,le 1er entier =%d et la 2eme =%d \n",a,b);
    printf("\n **** Au Revoir ****");
    getch();
    return 0;
}
