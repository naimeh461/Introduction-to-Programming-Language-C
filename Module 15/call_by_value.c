#include<stdio.h>
void fun(int x)
{
    x=200;
    printf("fun x er address - %p and value - %d\n",&x,x);
}
int main()
{
    int x=10;
    fun(x);
    printf("main x er address - %p and value-%d\n",&x,x);
    return 0;
}