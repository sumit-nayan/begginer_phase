#include<stdio.h>
int main()
{
int n;
printf("Number if elements of array:");
scanf("%d",&n);

int s[n];

printf("Enter Elements of array:");

for (int i = 0; i < n; i++)
{
    scanf("%d",&s[i]);
}
int c;
for (int i = 0; i < n/2; i++)
{
    c = s[i];
    s[i] = s[n-i-1];
    s[n-i-1] = c;
}
for (int i = 0; i < n; i++)
{
    printf("%d ",s[i]);
}
    return 0;
}