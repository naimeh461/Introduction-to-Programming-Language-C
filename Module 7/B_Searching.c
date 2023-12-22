#include<stdio.h>
int main()
{
    int n,x,z=-1;
   scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d ",&arr[i]);
    }
  
    scanf("%d",&x);

    for(int i=0; i<n ; i++){
       
        if(x==arr[i]){
            z=i;
            break;
        }
    }
    printf("%d",z);

    return 0;
}