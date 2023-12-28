#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10000];
        scanf("%s",s);
        int small=0,number=0,cap=0;
        for(int i=0;i<=strlen(s);i++){
            if(s[i]>=97 && s[i]<=122)
            {
                small++;
            }
            else if(s[i]>=65 && s[i]<=90){
                cap++;
            }
            
            else if(s[i]>=48 && s[i]<=57){
                number++;
            }
        }
        printf("%d %d %d\n",cap,small,number);
    }

    return 0;
}