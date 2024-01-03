#include<stdio.h>
int main()
{
    int s, n;
    scanf("%d",&n);
    s=n-1;
    for(int i=1;i<=n;i++){
        for(int j=s;j>0; j--){
            printf(" ");
        }
        for(int j=i;j>0; j--){
            printf("%d",j);
        }
        printf("\n");
        s--;
    }
    return 0;
}