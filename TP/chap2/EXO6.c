#include<stdio.h>
main()
{
    int a,b,c;

    printf("donner une premiere valeur " );
    scanf("%d",&a);

    printf("donner une deuxieme valeur " );
    scanf("%d",&b);

    printf("donner une troisieme valeur " );
    scanf("%d",&c);

    if(a>b && b>c)
        printf("\n alors \n%d est max \n%d est moyenne et \n%d est min",a,b,c);
    else if(b>a && a>c)
        printf("\n alors \n%d est max \n%d est moyenne et \n%d est min",b,a,c);
    else if(c>a && a>b)
        printf("\n alors \n%d est max \n%d est moyenne et \n%d est min",c,a,b);
    else if(c>b && b>a)
        printf("\n alors \n%d est max \n%d est moyenne et \n%d est min",c,b,a);
    else if(b>c && c>a)
        printf("\n alors \n%d est max \n%d est moyenne et \n%d est min",b,c,a);
    else
        printf("\n alors \n%d est max \n%d est moyenne et \n%d est min",a,c,b);
    printf("\n **** que le meilleur gagne ****\n");
    getch();


}

