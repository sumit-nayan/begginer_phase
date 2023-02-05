#include<stdio.h>
struct point {
    int x;
    int y;
};
void print(struct point p) {
    printf("%d %d\t",p.x,p.y);
}
int main() {

    struct point p1 = {12,32};
    struct point p2 = {42,52};

    print(p1);
    print(p2);

    return 0;
}