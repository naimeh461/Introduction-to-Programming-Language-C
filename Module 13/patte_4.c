#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value;
    scanf("%d",&value);
    int equal = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j] == value){
                equal++;
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
        }        
    }
    if(equal>0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
