#include<stdio.h>
int s(int n);
int main()
{

    int ar[5]={3,5,3,5,2};


    s(5,0,ar);






    return 0;
}

int s(int n,int i,int ar[])
    {
        printf("%d",ar[i]);
        s(n,i+1,ar);
    }