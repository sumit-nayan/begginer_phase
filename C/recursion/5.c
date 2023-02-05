#include<stdio.h>
int s(int n);
int sum =0;
int main()
{


    int n;
    scanf("%d",&n);

    int sum = s(n);

    printf("%d\n",sum);



    return 0;
}
int s(int n)
    {  
        if(n>0)
            {
                int r = n%10;
                sum = sum + r;
                s(n/10);
                
            }
        else
            {
                return sum;
            }
    }