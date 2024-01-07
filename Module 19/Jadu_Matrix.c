#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int value = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    value = 0;
                    break;
                }
            }
            else if (i + j == col-1)
            {
                if (a[i][j] != 1)
                {
                    value = 0;
                    break;
                }
            }
            else if (a[i][j] != 0)
            {
                value = 0;
                break;
            }
        }
    }
    if (value == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}