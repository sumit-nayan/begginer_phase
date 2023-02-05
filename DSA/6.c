#include<stdio.h>

struct self {
    int i;
    char c;
    struct self *ptr;
};

int main() {
    struct self var1;
    struct self var2;


    var1.i = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.i = 65;
    var2.c = 'A';
    var2.ptr = NULL;
 
    var1.ptr = &var2;

    printf("%d %c\n", var1.ptr->i, var1.ptr->c);

    return 0;
}