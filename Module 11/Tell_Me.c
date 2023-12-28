#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t;i++){
        int n,x,found=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n ;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&x);
        for(int i=0;i<n;i++){
          
            if(x==arr[i]){
                found++;
                break;
            }
        }
        if(found==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}