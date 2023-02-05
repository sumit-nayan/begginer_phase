#include<stdio.h>
int s(int n);
int main()
{






    return 0;
}
int s(int n)
    {   
        if(n==1)
            {
                return 1;
            }
        if(n==0)
            {
                return 0;
            }
        int n1 = s(n-1);
        int n2 = s(n-2);
        int fib = n1 + n2;
        printf("fib of %d is %d\n",n,fib);
        return n;

    }