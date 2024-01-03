#include<stdio.h>
void fun(int *ar,int n){
    ar[0]=500;
} 
int main()
{
    int ar[5]={10,20,30,40,50};
    int sz= sizeof(ar)/sizeof(int);
    fun(ar,sz);
    for(int i=0;i<sz;i++){
        printf("%d ",ar[i]);
    }
}