#include<stdio.h>

int fun(int num) {

    int count = 0;
    while(num)
        {
            count++;
            num = num -1;
        }
    return(count);
}   

int main() {

    

    int a = fun(435);

    printf("%d\n",a);

    return 0;
}
    