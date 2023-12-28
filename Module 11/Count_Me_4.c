#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    int cnt[26] = {0};
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}


