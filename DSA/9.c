#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
void print(struct node *head) {
    if(head==NULL)
        {
            printf("Empty");
        }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL) {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    printf("%d",*ptr);
}
int main() {


return 0;
}