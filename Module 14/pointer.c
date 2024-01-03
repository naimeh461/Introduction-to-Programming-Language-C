#include<stdio.h>
int main()
{
    int x=10;
    int *p = &x;
 
    // dereference
    printf("%d\n",*p);

    // change value 
    *p = 500;
    printf("%d\n",*p);
    return 0;
}