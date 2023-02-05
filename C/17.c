#include<stdio.h>
struct employee {

   char name;
   int age;
   int salary;

};

int manager()
{

    struct employee manager;
    manager.age = 27;

    if(manager.age>60)
        {
            manager.salary = 100000;
        }
    else
        {
            manager.salary = 50000;
        }
    return manager.salary;
}
int main() {

    struct employee emp1;
    struct employee emp2;

    scanf("%d",&emp1.age);

    printf("%d",emp1.age);

    return 0;
}