#include<stdio.h>
int main()
{
    int m,n;
    int s[m][n];

    printf("Enter your matrix:");

    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            scanf("%d ",&s[i][j]);
        }
        
    }
    

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Array[%d][%d]:%d\n",i,j,s[i][j]);
        }
        
    }

    printf("\nMatrix is:\n");


    for (int i = 0; i < m; i++)
    {   
        printf("\n");

        for (int j = 0; j < n; j++)
        {
            printf("%d\t",s[i][j]);
        }
        
    }
    printf("\n");
    




    return 0;
}