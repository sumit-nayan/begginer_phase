#include<stdio.h>
void s(int n);
int main()
{

    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        s(i);
    }
    printf("\n");




    return 0;
}
void s(int n)
    {
        printf("%d\t",n);
    }