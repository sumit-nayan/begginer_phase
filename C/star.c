#include<stdio.h>
int main()
{ 
     /* int n=6;
    for (int i = 1; i <= n; i++)
    {   
        printf("\n");
        for (int j = 1; j <= i; j++)    
        {
            printf("*");
        }
        
    }

    printf("\n");*/
    

    int n=6;

    for (int i = 1; i <= n; i++)
    {   
    

        for (int j = n; j >= i; j--)
        {
            printf(" ");

            for (int k = 1; k <=i; k++)
            {
                printf("*");
                printf("\n");
            }
            

            printf("*");
            
        }
        
    }

    printf("\n");
    







    return 0;
}