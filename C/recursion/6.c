#include<stdio.h>
int s(int n1,int n2);
int main()
{


    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("%d",s(n1,n2));



    return 0;
}
int s(int n1,int n2)
    {
        if(n2!=0)
            {
                return s(n2,n1%n2);
            }
        else    
            {
                return n1;
            }
    }