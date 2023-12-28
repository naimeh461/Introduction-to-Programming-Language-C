#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int lenght = strlen(s);
    int con=0;
    for(int i=0;i<lenght;i++){
        if(s[i]>=97 && s[i]<=122 && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                con++;
        }
    }
    printf("%d",con);
    return 0;
}