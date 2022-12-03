#include<stdio.h>
main()
{
    int i,n,temp,j;
    int ok=1;

    do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);

    }
    while(n<=0);
    int t[n];
    for(i=0; i<n; i++)
    {
        printf("entrer un nombre DE LA CELLULE [%d]\n",i);
        scanf("%d",&t[i]);
    }

//    while(ok!=0){

//    for(i=0; i<n; i++)
//        {
//
//            if(t[i]>t[i+1])
//            {
//                temp=t[i];
//                t[i]=t[i+1];
//                t[i+1]=temp;
//                i=n+1;
//                ok=1;
//            }
//            else
//            {
//                ok=0;
//            }
//
//
//        }
//    }


    puts("AVANT TIRAGE");

    for(i=0; i<n; i++)
    {
        printf("%d \t",t[i]);
    }
    puts("");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t[i]>t[j])
            {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }
    puts("APRES TIRAGE");

    for(i=0; i<n; i++)
    {
        printf("%d \t",t[i]);
    }
    getch();
}

