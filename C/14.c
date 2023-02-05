#include<stdio.h>
int main()
{
int n;
printf("Number of elements of array:");
scanf("%d",&n);

int s[n];

printf("Enter Elements of array:");

for (int i = 0; i < n; i++)
{
    scanf("%d",&s[i]);
}

int sum=0;
for (int i = 0; i < n; i++)
{
    sum = sum + s[i];
}
printf("Sum: %d",sum);

return 0;
}