#include<stdio.h>
void print_value(int a[],int n){
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d %d",min,max);
}
int main()
{
    int arr[100000],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    print_value(arr,n);
}