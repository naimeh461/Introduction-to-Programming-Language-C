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
    int present = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]== e){
            present++;
            break;
        }
        }
    }
    if(present==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}