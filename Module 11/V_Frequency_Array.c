#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

  int *cal = (int *)calloc(m + 1, sizeof(int)); 
    for(int i=0; i<n; i++){
        int value = arr[i];
        cal[value]++;
    }
    for(int i=1;i<=m;i++){
        printf("%d\n",cal[i]);
    }
    return 0;
}