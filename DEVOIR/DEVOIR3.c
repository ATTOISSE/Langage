#include<stdio.h>

 typedef struct
{
    char nom[29];
    char prenom[29];
    float moy;
}ETUDIANT;

main()
{
    int z,i;

    do{
        puts("donner le nombre d'etudiant");
        scanf("%d",&z);
    }while(z<=0);

  ETUDIANT t[z];

  for(i=0;i<z;i++)
  {
      puts("donner le nom");
      gets(t[i].nom);

      puts("donner le prenom");
      gets(t[i].prenom);

      puts("donner la moyenne");
      scanf("%f",&t[i].moy);



  }
   for(i=0;i<z;i++)
  {
    s
      printf("le nom-prenom-moyenne %s-%s-%f",t[i].nom,t[i].prenom,t[i].moy);
  }

}
