#include<stdio.h>
#include<string.h>
int main()
{
    char a[18];
    fgets(a,10,stdin);
    printf("%d",a);
    return 0;
}