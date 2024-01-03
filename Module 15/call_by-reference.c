#include<stdio.h>
void fun(int *p){
    printf("value of p before p= %d address of p = %p\n",*p,p);
    *p=200;
    printf("value of p after p= %d\n",*p);
}
int main()
{
    int x=100;
    printf("value of x before x= %d address of x = %p\n",x,&x);
    fun(&x);
    printf("value of x after x= %d\n",x);
    return 0;
}