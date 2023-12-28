#include<stdio.h>
int sum (int x,int y) {
    int sum = x+y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int value = sum(a,b);
    printf("sum = %d",value);
    return 0;
}