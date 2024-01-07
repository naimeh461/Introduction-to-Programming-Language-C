#include<stdio.h>
void fun(int n){
    if(n==0) return;
    int x= n%10;
    fun(n/10);
    printf("%d ",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int value;
        scanf("%d",&value);
        fun(value);
        if(value==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}