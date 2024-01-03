#include <stdio.h>
int main()
{
    int k, s, n;
    scanf("%d", &n);
    k = 1;
    s = n-1;
    int value = 2*n-1;
    for (int i = 1; i <= value; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("-");
            }
        }
        else{
            for (int j = 1; j <= k; j++)
            {
                printf("#");
            }

        }
        printf("\n");
        if(2*i<value){
            k=k+2;
            s=s-1;

        }else{
            k=k-2;
            s=s+1;
        }
    }
    return 0;
}