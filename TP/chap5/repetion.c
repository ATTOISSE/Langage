#include<stdio.h>

main()
{
    int i,cpt=0,j,n;

    do
    {
        puts("donner le nombre de mot");
        scanf("%d",&n);
    }while(n<=0);

    char t[n][10];

    fflush(stdin);

    for(i=0;i<n;i++)
    {
        printf("DONNER LA %de mot \n",i+1);
        gets(t[i]);

    }

    for(i=0;i<n;i++)
    {
        printf("%s \t",t[i]);
    }

    for(i=0;i<n;i++)
    {
       for(j=0;j<strlen(t[i]);j++)
        {
            if(t[i][j]=='m' || t[i][j]=='M')
            {

            cpt++;
            break;
        }
            }
    }

    printf("il y a %d lettre [M] OU [m] ",cpt);
}
