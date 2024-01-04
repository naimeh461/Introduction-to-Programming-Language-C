#include <stdio.h>
int main()
{
    int row, col;
    int count = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if(count==row*col){
        printf("zero matrix");
    }
    else{
        printf("not a zero matrix");
    }
   
    
    return 0;
}