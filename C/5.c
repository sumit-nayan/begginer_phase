#include<stdio.h>
float t(float c);
int main()
{

    float c,f;

    printf("Enter Temp in Celcius:");
    scanf("%f",&c);
    
    f = t(c);

    printf("%f\n",f);




    return 0;
}

float t(float c)
    {
        float f = 1.8*c + 32;
        return f;
    }