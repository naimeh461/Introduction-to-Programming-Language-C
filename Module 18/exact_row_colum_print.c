#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    int e;
    scanf("%d",&e);
    for(int i=0;i<col;i++){
        printf("%d ",a[e][i]);
    }
    return 0;
}