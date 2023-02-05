#include<stdio.h>
int s(int n);
int main()
{

    printf("%d\n",s(6));










    return 0;
}

int s(int n)
{
        if(n==1)
            {
                return 1;
            }
    {
        int sum1 = s(n-1);
        int sum = sum1 * n;
        return sum;
    }   
}