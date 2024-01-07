#include <stdio.h>

int main()
{
    int time;
    scanf("%d", &time);
    for (int k = 1; k <= time; k++)
    {
        int t = 0, p = 0;
        int n;
        char a[100001];

        scanf("%d", &n);
        scanf("%s", &a);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'T')
            {
                t++;
            }
            else if (a[i] == 'P')
            {
                p++;
            }
        }
        if (t == p)
        {
            printf("Draw\n");
        }
        else if (t > p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Pathaan\n");
        }
    }
    // printf("%d %d", t, p);
    return 0;
}
