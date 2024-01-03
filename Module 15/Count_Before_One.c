#include<stdio.h>
int  count_before_one(int a[],int n){
    int counter =0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            break;
        }
        counter++;
    }
    return counter;

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int count = count_before_one(a,n);
    printf("%d",count);
    return 0;
}