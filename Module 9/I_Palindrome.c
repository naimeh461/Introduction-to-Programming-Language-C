#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1001];
    scanf("%s", &arr);
    int lenght = strlen(arr);
    int i = 0, j = lenght - 1;
    int palindrome = 1;
    while (i < j)
    {
        
        if (arr[i] != arr[j])
        {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}