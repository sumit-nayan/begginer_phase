#include<stdio.h>
int s(int n);
int count =0;
int main()
{


    int n,count;
    scanf("%d",&n);

    count = s(n);

    printf("%d",count);

    return 0;
}
int s(int n)
    {
        
        if(n>0)
            {
                count ++;
                s(n/10);
            }
        else
            {
                return count;
            }
    }