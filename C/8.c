#include<stdio.h>
#include<string.h>

struct Employee
    {
        int id;
        char name[20];
        float salary;
    }e1,e2;
int main()
{

e1.id = 4946;
strcpy(e1.name,"Sonu");
e1.salary = 43345456;

printf("%d",e1.id);






return 0;
}
    




  
