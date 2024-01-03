#include<stdio.h>
int odd_cou (int a[],int n){
    int count= 0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    return count;

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int odd_counter =  odd_cou(arr,n);
    printf("%d",odd_counter);
    return 0;
}