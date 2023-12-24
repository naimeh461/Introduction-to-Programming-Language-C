#include <stdio.h>
int main()
{
    int n,rep,repInd;
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    scanf("%d %d",&repInd,&rep);
   
    
    for(int i = n-1 ; i<=0 ; i--){
        if(i == repInd){
            printf("%d ",rep);
        }
        else{
            printf("%d ",a[i]);
        }
    }
   
    return 0;
}