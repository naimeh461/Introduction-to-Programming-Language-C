#include<stdio.h>

int fun(int a[], int i, int n, int sum) {
    if (i == n) {
        return sum;
    } else {
        sum = sum + a[i];
        return fun(a, i + 1, n, sum);
    }
}

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = fun(a, 0, n, sum);
    printf("%d", result);

    return 0;
}
