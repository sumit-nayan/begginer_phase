#include<stdio.h>
int main()
{

    
while (2>1)
{
    
    int n,r=0;

    scanf("%d",&n);


    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            r =1;
            break;
        }
        
    }

    if(r==1)
    {
        printf("Not Prime Number\n");
    }
    else
        {
            printf("Prime Number\n");
        }
    
}

    return 0;
}