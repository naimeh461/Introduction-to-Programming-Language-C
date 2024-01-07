#include <stdio.h>
#include <limits.h>
int fun(int a[], int n, int i)
{
    if (n == i)
    {
        return INT_MIN;
    }
    int large = fun(a, n, i + 1);
    if (large < a[i])
    {
        return a[i];
    }
    else
    {
        return large;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int large = fun(a, n, 0);
    printf("%d", large);
    return 0;
}