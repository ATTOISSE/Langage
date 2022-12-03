#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ch[12]= "bon";
    char ch3[12] = "jour";
    char ch1[13] ;
    char ch2[16];
    char *nb;
    int test;
    char *np = "ATTOISSE MOHAMED";
//    puts("donner un nom");
//    gets(ch2);
//    puts("donner un nom");
//    gets(ch1);
    np = strrchr(np,'M');
    printf("%c\n",*(np+2));
    test = strncasecmp(ch2,ch1,2);

   if(test>0)
   {
       puts("je ne suis pas un robot");
   }
   else {
    if(test==0)
        puts("je suis un robot");
    else
        puts("au revoir bandit");
   }

printf("%s",ch);

//
//    char buffer[80];
//    printf( "Enter your login (only alpha-numeric characters) : " );
//    scanf( "%s", buffer );
//
//    bool isCorrect = true;
//    size_t length = strlen( buffer );
//    for( int i=0; i<length; i++ ) {
//        if ( isalnum( buffer[i] ) == false ) {
//            isCorrect = false;
//        }
//    }
//
//    if ( isCorrect ) {
//        printf( "Your login is correct\n" );
//    } else {
//        printf( "Your login is not correct\n" );
//    }
//
//    return EXIT_SUCCESS;

}
