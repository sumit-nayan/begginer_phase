#include<stdio.h>
int main()
{
   
    int a[] = {1,2,3,4,5,6};

    printf("%p\t",&a[0]);
    printf("%p\t",a);
    printf("%p\t",&a[2]);
    printf("%p\n",a+2);


    printf("%d\t",*(&a[0]));
    printf("%d\t",*(a));
    printf("%d\t",*(&a[2]));
    printf("%d\t",*(a+2));

    return 0;
}