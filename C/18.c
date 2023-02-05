#include<stdio.h>
struct student {
    char name[50];
    int roll;
    int age;
    float marks;
};
void print(char name[],int roll, int age, float marks) {
    printf("%c %d %d %f ",name, roll, age, marks);
}

int main() {

    struct student s1 = {"Sumit", 210106077, 18, 95};
    print(s1.name,s1.roll,s1.age,s1.marks);

    return 0;
}