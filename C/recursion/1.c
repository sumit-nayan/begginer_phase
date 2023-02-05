#include<stdio.h>
int s(int n);
int main()
{
    int n=50;

    





    return 0;
}
int s(int n)
    {   if(n==1)
            {
                return 1;
            }
        if(n==0)
            {
                return 0;
            }
        int fb1 = s(n-1);
        int fb2 = s(n-2);
        int fb = fb1 + fb2;
        return fb;

    }