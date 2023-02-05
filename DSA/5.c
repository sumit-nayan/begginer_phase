#include<stdio.h>
struct abc {
    int a;
    char b;
};
void print(struct abc p[]) {
    for (int i = 0; i < 2; i++)
    {
        printf("%d %c\t",p[i].a,p[i].b);
    }
    
}

int main() {
    struct abc arr[2] = {{1,'A'},{2,'B'}};
    print(arr);

    return 0;
}