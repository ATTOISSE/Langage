#include<stdio.h>

 struct EMPLOYE
{
  char mat[10];
  char nom[30];
  char prenom[50];
  char service[40];
  char fonction[19];
  int salaire;
  char genre[20];
}E,max,min;

main()
{

    int i,n,a,j,cpt=0,som=0;

    do
    {
        puts("doner le nombre d'employe");
        scanf("%d",&n);
    }while(n<=0);

    fflush(stdin);

    for(i=1;i<=n;i++){

        printf("donner la matricule du %de employe \n",i);
        gets(E.mat);

         printf("donner le prenom du %de employe \n",i);
        gets(E.prenom);

        for(a=0; a<strlen(E.prenom); a++){
            E.prenom[a] = toupper(E.prenom[a]);
        }

         printf("donner le nom du %de employe \n",i);
        gets(E.nom);

          printf("donner le service du %de employe \n",i);
        gets(E.service);

         for(j=0; j<strlen(E.service); j++){
            E.service[j] = toupper(E.service[j]);
         }
          printf("donner la fonction du %de employe \n",i);
        gets(E.fonction);
        fflush(stdin);

        do{
           printf("donner le salaire du %de employe \n",i);
            scanf("%d",&E.salaire);
        }while(E.salaire<=0);

        do{
           fflush(stdin);
           printf("donner le GENRE du %de employe \n",i);
           gets(E.genre);

        for(j=0; j<strlen(E.genre); j++){
            E.genre[j] = tolower(E.genre[j]);
        }
        }while(strcmp(E.genre,"masculin")!=0 && strcmp(E.genre,"feminin")!=0);


        system("cls");
        system("pause");

        if(i==1)
        {
            max=E;
            min=E;
        }
        else
        {
            if(max.salaire<E.salaire)
                max=E;
            if(min.salaire>E.salaire)
                min=E;
        }

        if(strcmp(E.service,"informatique")==0)
        {
            cpt++;
        }

        if(E.prenom[0]=='A' && E.prenom[n-1]=='E')
        {
            som++;
        }



    }

    for(i=1;i<=n;i++)
    {
        printf("la matricule du %de EMPLOYE est: %s\n",i,E.mat);
        printf("le prenom du %de EMPLOYE est:%s\n",i,E.prenom);
        printf("le nom du %de EMPLOYE est: %s\n",i,E.nom);
        printf("le service du %de EMPLOYE est: %s\n",i,E.service);
        printf("la fonction du %de EMPLOYE est: %s\n",i,E.fonction);
        printf("le salaire du %de EMPLOYE est: %d\n",i,E.salaire);
        printf("le genre du %de EMPLOYE est: %s\n\n",i,E.genre);

    }
    puts("les information de l'EMPLOYE qui a le plus grand salaire \n");

        printf("la matricule du  EMPLOYE est: %s\n",max.mat);
        printf("le prenom du  EMPLOYE est:%s\n",max.prenom);
        printf("le nom du  EMPLOYE est: %s\n",max.nom);
        printf("le service du EMPLOYE est: %s\n",max.service);
        printf("la fonction du  EMPLOYE est: %s\n",max.fonction);
        printf("le salaire du  EMPLOYE est: %d\n",max.salaire);
        printf("le genre du  EMPLOYE est: %s\n",max.genre);

    puts("\n les information de l'EMPLOYE qui a le plus petit salaire \n");

        printf("la matricule du  EMPLOYE est: %s\n",min.mat);
        printf("le prenom du EMPLOYE est:%s\n",min.prenom);
        printf("le nom du  EMPLOYE est: %s\n",min.nom);
        printf("le service du  EMPLOYE est: %s\n",min.service);
        printf("la fonction  EMPLOYE est: %s\n",min.fonction);
        printf("le salaire  EMPLOYE est: %d\n",min.salaire);
        printf("le genre du EMPLOYE est: %s\n",min.genre);

        printf("IL Y A %d informaticien(e) \n",cpt);

        printf("le pourcentage des EMPLOYEs DONT LEUR PRENOM COMENCE PAE A ET TERMINE PAR E est %.2f",(float)som*100/n);

}

