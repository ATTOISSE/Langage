#include<stdio.h>
main()
{
    int i,t[2];


   /* for(i=0;i<2;i++)
    {
        printf("donner la %de valeur du tableau \n",i);
        scanf("%d",&t[i]);
    }

    for(i=0;i<2;i++)
    {
        printf("%d \t",t[i]);
    }
    */
 char str[100], rev[100];
    int s,j;

    printf(" Entrez une cha�ne de caract�re :  ");
    gets(str);

    j = 0;
    s = strlen(str);


    rev[s] = '\0'; //le dernier caract�re doit toujours �tre �gale � '\0'.
    for (i = s - 1; i >= 0; i--)
    {
      rev[j++] = str[i];
    }
    rev[i] = '\0';

    printf(" Cha�ne de caract�re apr�s inversion = %s \n", rev);
    rev[0]='\0';
    printf("%s",rev);
    getch();


}
