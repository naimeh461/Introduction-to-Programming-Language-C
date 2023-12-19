#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>=97 && x<= 122){
        int ans=x-32;
        printf("%c",ans);
    }
    else if(x>=65 && x<=90)
    {
        int ans=x+32;
        printf("%c",ans);
    }
    else
    {
        printf("it not a character");
    }
    return 0;
}