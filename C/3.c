#include<stdio.h>
void s(int n);
int main()
{

    int n;
    scanf("%d",&n);
    s(n);





    return 0;
}
void s(int n)
    {
        if(n==0)
            {
                return;
            }
      
        printf("Hello!\n");
        s(n-1);

      
    }