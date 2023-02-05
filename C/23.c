#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isfull(struct queue *ptr)
{
    if(ptr->rear==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct queue *ptr)
{
    if(ptr->front==ptr->rear)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void firstele(struct queue *ptr)
{
    if(isempty(ptr))
    {
        printf("no element in queue to display\n");
    }
    else
    printf("the first element in queue is = %d \n",ptr->arr[ptr->front+1]);
}
void lastele(struct queue *ptr)
{
    if(isempty(ptr))
    {
        printf("no element in queue to display\n");
    }
    else
    {
        printf("%d",ptr->arr[ptr->rear]);
    }
    
}
struct queue*  enqueue(struct queue *s,int data)
{
    if(isfull(s))
    {
        printf("sorry!! queue is full\n");
    }
    else
    {
             s->rear=s->rear+1;
            s->arr[s->rear]=data;
        
        }
    return s;
    
    }
    
struct queue* dequeue(struct queue *ptr)
{
    int val;
    if(isempty(ptr))
    {
        printf("sorry!! queue is empty\n");
    }
    else
    {
        val=ptr->arr[ptr->front];
        printf("the deleted element is %d",val);
        ptr->front=ptr->front+1;
    }
    return ptr;
}
void main()
{
    struct queue *s;
    s->size=6;
    s->front=s->rear=-1;
    int n;
    s->arr=(int *)malloc(s->size*sizeof(int));
    char ch;
    while(1)
    {
        printf("menu\n");
        printf("0.exit program\n");
        printf("1.enter element to qeueu\n");
        printf("2.delete element from queue\n");
        printf("3.print first element of queue\n");
        printf("4.print last element of queue\n");
        printf("5.check queue is empty or not??\n");
        printf("6.check queue is full or not??\n");
        printf("choose the task you want to perform with queue\n");
        scanf("%c",&ch);
        switch(ch)
        {
            case '0':exit(1);
                    break;
            case '1':printf("enter element you want to enter\n");
                    scanf("%d",&n);
                    s=enqueue(s,n);
                
                    break;
            case '2':s=dequeue(s);
                    break;
            case '3':firstele(s);
                    break;
            case '4':lastele(s);
                    break;
            case '5':isempty(s);
                    break;
            case '6':isfull(s);
                    break;
            default:printf("wrong choice\n");
                    break;
        }
    }
}