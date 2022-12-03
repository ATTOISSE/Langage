#include<stdio.h>
main()
{
    int a,i,n,np=0,nn=0,no=0;


    printf("donner  LE NOMBRE DE VALEUR positif ");
    scanf("%d",&a);


    for(i=1;i<=a;i++){
       printf("donner une valeur positif ");
    scanf("%d",&n);
    if(n<0){
        nn++;}
    else if(n==0)
        {no++;}
    else if(n>0)
        {np++;}
    }
    printf("le nombre positif %d \n le nombre negatif est %d \n et le nombre nul est %d \n",np,nn,no);

}
