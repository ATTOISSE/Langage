 #include<stdio.h>
 #include<math.h>
main()
{
    int  n,i,j,som=0,sm=0;
    int cpt=0,p=1,x;
    float moy;
    do{
    puts("donner une valeur");
    scanf("%d",&n);}
    while(n<=0);

    for(i=1;i<=n;i++){
    do{
        printf("donner la %d valeur\n",i);
        scanf("%d",&x);
    }while(x<=0);
    for(j=1;j<=x/2;j++){

    if((j*j==x) && (x%j==0)){
        som+=x;}}
     if(x%2==0){
        p*=x;}
    else if(x%2==1){
        sm+=x;
        cpt++;}
    }



   (som==0)?puts("aucun nombre carre"):printf("somme des nombre carre:%d\n",som);
   (p==1)?puts("aucun nombre pair"):printf("produit des nombres pair:%d\n",p);
   if(cpt==0)
    puts("aucun nombre impair");
   else{
    moy=(float)sm/cpt;
    printf("moyenne des nombres impair :%.2f",moy);
   }

}

