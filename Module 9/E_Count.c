#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",arr[i]);
    }
    int max=arr[0], min=arr[0], maxInd=0, minInd=0;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=a[i];
            maxInd = i;
        }
        if(arr[i<min]){
            min=a[i];
            minInd = i;
        }
    }

    arr[max]= int temp;
    arr[max]= arr[min];
    arr[min]= arr[temp];
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}