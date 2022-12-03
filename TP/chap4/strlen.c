#include<stdio.h>
#include<string.h>
main()
{
    char s[20]="bonne ";
    char s1[20]="bonne";
    char s2[20]="test";
    char s3[20];
    int test;
    char *ch1 ="mohamed";
    char *ch2;

   /* puts("donner ton nom");
    gets(s1);
    puts("donner votre prenom");
    gets(s); */
    // STRNCPY sert a
    strncpy(s,s2,strlen(s));


     // printf("%d",strlen(s1));
    printf("%s",s);

    // STRCAT sert a fusionner deux chaines de caractere

   // printf("%s\n",strcat(s2,s1));

   /* puts("nom:");
    gets(s3);
   strncat(s2,s1,2);
   puts(s2); */

   // LA FONCTION STRCMP permet de comparer é chaine

//   test = strcmp(s,s1);
//printf("%d",test);
//   if(test=0)
//   printf("bonjour\n");
//    else
//        puts("au revoir");

// la fonction permet de identifier un caractere
//ch2= strrchr(ch1,'m');
//printf("%c\n",*ch2);
//printf("%c",*(ch2+1));
//




}
