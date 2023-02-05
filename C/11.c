#include<stdio.h>
int main()
{
    int s[5],sum=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&s[i]);
    }

    for (int  i = 0; i < 5; i++)
    {
        sum = sum + s[i];
    }


    int av = sum/5;


    printf("%d",av);    
    





    return 0;
}