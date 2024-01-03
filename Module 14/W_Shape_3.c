#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    for (int i = 1; i <= 2*n ; i++)
    {
        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = k; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
        if (i < n)
        {
            s--;
            k = k + 2;
        }
        else if(i>n)
        {
            s++;
            k = k - 2;
        }
    }
    return 0;
}