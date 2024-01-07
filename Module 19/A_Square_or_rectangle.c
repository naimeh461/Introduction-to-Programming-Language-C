#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int length,height;
        scanf("%d %d",&length,&height);
        if(length == height){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    return 0;
}