#include<stdio.h>
int main()
{
    int i = 10;
    int x=i++;
    printf("x=%d i=%d \n",x,i);
    // here x=10 is i=11; 


    x=++i;
    printf("x=%d i=%d",x,i);
    // here x=12 is i=12; 
    return 0;

}