#include<stdio.h>
int main() {
    int a[10];
    int *p;

    p = &a[9];

    printf("%d\n",p-a+1);


    return 0;
}