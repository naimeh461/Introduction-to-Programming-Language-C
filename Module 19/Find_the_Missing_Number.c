#include <stdio.h>
int main()
{
    long int n;
    scanf("%lld", &n);
    for (int i=1;i<=n;i++)
    {
        long long int a, b, c, d;
        long long int number;
        scanf("%lld %lld %lld %lld", &number, &a, &b, &c);
        long long int value = a * b * c;
        if (number == 0)
        {
            printf("0\n");
        }
        else if (number % value == 0)
        {
            printf("%lld\n", number / value);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
} 