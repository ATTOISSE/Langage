
#include<stdio.h>


main(){
int a, b,sa,sb;

//a=20 ;

printf("donnez le a: ");
scanf("%d",&a);
//b=284;
printf("donnez le b: ");
scanf("%d",&b);
sa=1;
for(int d=2;d<=a-2;d++)
{
    if (a%d==0)
        sa=sa+d;
}
sb=1;
for(int d=2;d<=b-2;d++)
{    if (b%d==0)
        sb=sb+d;
}
if (sb==a && sa==b)
{
    printf("a et b sont amicaux");
}
else
    printf("a et b ne sont pas amicaux");

    getch();

}
