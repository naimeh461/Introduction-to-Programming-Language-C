#include<stdio.h>
void fun(int a[],int i,int n){
    if(i==n) return;
    fun(a,i+1,n);
    if(i%2==0){
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,0,n);
    return 0;
}