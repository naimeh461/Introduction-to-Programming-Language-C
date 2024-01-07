#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 6 + (n / 2);
    int k = 1, s = value - 1;

    for (int i = 0; i < value; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }

    int s2 = 6-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}