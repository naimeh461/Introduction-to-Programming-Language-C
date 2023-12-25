#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100001];
    scanf("%s", arr);
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        int value;
        if (arr[i] >= 65 && arr[i]<=90)
        {
            value = arr[i] + 32;
            printf("%c",value);
        }
        else if(arr[i] >=97 && arr[i]<=122)
        {
            value = arr[i] - 32;
            printf("%c", value);
        }
        else if(arr[i] == 44)
        {
            printf("%c",32);
        }
    }
    return 0;
}