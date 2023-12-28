#include<stdio.h>
int main()
{
    int t,m1,m2,d;
    scanf("%d",&t);
    int a[t-1];
    for(int i=0;i<t ;i++){
        scanf("%d %d %d",&m1,&m2,&d);
        int day = m1*d/(m1+m2);
        int daySave = d-day;
        printf("%d\n",daySave);
    }
    return 0;
}