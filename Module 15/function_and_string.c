#include<stdio.h>
#include<string.h>
void fun(char *ar){
    int n =  strlen(ar);
    for(int i=0;i<n;i++){
        printf("%c",ar[i]);
    }
}
int main()
{
    char ar[6] ="hello";
    fun(ar);
    return 0;
}