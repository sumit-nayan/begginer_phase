#include<stdio.h>

int fun() {

    static int a = 16;
    return a--;
}


int main() {
    
for(fun();fun();fun())
    {
        printf("%d\t",fun());
    }
    return 0;
    
}
