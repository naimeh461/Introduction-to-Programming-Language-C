#include<stdio.h>
int main()
{
    float x,p;
    scanf("%f %f",&x,&p);
    float original_value = p/(1-x/100);
    printf("%.2f",original_value);
    return 0;
}