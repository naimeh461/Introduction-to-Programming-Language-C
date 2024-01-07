#include<stdio.h>
long long int fun(long long int n){
    if(n==0) {
        return 1;
    }
    long long int fac = fun(n-1);
    return fac*n;

}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int fac = fun(n);
    printf("%lld",fac);
    return 0;
}