#include<stdio.h>
int sum () {
	int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    return sum;
}
int main()
{
    int value = sum();
    printf("sum = %d",value);
    return 0;
}