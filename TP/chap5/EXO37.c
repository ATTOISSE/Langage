#include<stdio.h>
#include<time.h>
#define N 3
main()
{
    srand(time(NULL));
    int mat[N][N],i,j,max,minMax,min,maxMin;
    for(i=0;i<N;i++){
       for(j=0;j<N;j++){
            mat[i][j] = rand()%21;
        }
    }
    puts("MATRICE :");
    for(i=0;i<N;i++){
       for(j=0;j<N;j++){
            printf("%d\t",mat[i][j]);
        }
        puts("");
    }
    /* Pour les colonnes */
    for(j=0;j<N;j++){
        max = mat[0][j];
        for(i=0;i<N;i++){
            if(max < mat[i][j])
                max = mat[i][j];
        }
        //printf("MAX DE LA COLONNE %d : %d\n",j,max);
        if(j==0)
            minMax = max;
        else if(minMax > max)
            minMax = max;
    }
    /* Pour les lignes */
    for(i=0;i<N;i++){
        min = mat[i][0];
        for(j=0;j<N;j++){
            if(min > mat[i][j])
                min = mat[i][j];
        }
        //printf("MIN DE LA LIGNE %d : %d\n",i,min);
        if(i==0)
            maxMin = min;
        else if(maxMin < min)
            maxMin = min;
    }
    printf("Minimum des maximas de chaque colonne : %d\n",minMax);
    printf("Maximum des minimas de chaque ligne : %d\n",maxMin);
}
