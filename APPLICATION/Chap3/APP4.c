#include<stdio.h>
main()
{
    int i,n,val,max,min;
    puts("donner le nombre de valeurs a saisir");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        puts("donner un entier");
        scanf("%d",&val);
        if(i==0)
        {
            min=val;
            max=val;
        }
        else{
            if(val<min)
                min=val;
            if(val>max)
                max=val;
        }
    }
    printf("Minimum=%d\n",min);
    printf("Maximum=%d\n",max);
    getch();

}
