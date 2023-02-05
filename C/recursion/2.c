#include<stdio.h>
int s(int n);
int main()
{
    int n;
    scanf("%d",&n);


    printf("%d",s(n));




    return 0;
}
int s(int n)
    {   if(n==1)
            {
                return 1;
            }
        int sum1 = s(n-1);
        int sum = sum1 + n; //doubt:- without return sum likhe bhi sum kaise return kr rha hai
    }