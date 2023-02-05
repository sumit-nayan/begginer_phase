#include<stdio.h>
int main()
{  
    printf("Enter number of integer in your array:");
    int n,c;
    scanf("%d",&n);
    int s[n];
    for(int k=0;k<n;k++)
    {
    printf("Enter your interger of array %d:",k);
    scanf("%d",&s[k]);
    }
    printf("Your array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",s[i]);
    }
        printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (s[i]>s[j])
            {
                c=s[j];
                s[j]=s[i];
                s[i]=c;

            }
            
        }
        
    }
    
    printf("Largest integer in your array is : %d.\n",s[n-1]);
    printf("2nd Largest number in your array is : %d.\n",s[n-2]);
    
    
    
    
    

    return 0;
}