#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%d",&a);
    strcpy(b,a);
    printf("%s %s",b,a);
    return 0;

}