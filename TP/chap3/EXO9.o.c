#include<stdio.h>
main()
{
    int n=0,i=2,pre=1,m,k;

    puts("donner un entier positif");
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
          k=i*m;

     while(i<n/2 && pre){

        if(n%i==0){
            pre=0;
        }
        //i++;

     }

      }
     if(pre)
        printf("%d est premier",n);
     else
        printf("%d  n%cest pas premier",n,39);
     getch();
}
