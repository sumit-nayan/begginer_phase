#include<stdio.h>
int s(int i,int j,int m,int n);
int main()
{
    while(2>1)
{
    int m,n;
    printf("Enter order of your matrix:");

    scanf("%d %d",&m,&n);

    printf("Number of Path : %d\n",s(0,0,m,n));
}
    return 0;
}
int s(int i,int j,int m,int n)
    {
        if(i>m || j>n)
            {
                return 0;
            }
        if(i==m-1 || j==n-1)
            {
                return 1;
            }
        int o = s(i,j+1,m,n);
        int p = s(i+1,j,m,n);
            return o+p;
    }