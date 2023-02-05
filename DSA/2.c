#include<stdio.h>
struct point {
    int x;
    int y;
};
void print(struct point *ptr) {
    printf("%d %d\t", ptr->x,ptr->y);
}
int main() {

struct point p1 = {32,65};
struct point p2 = {34,89};

print(&p1);
print(&p2);

    return 0;
}