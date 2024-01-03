#include<stdio.h>
#include<string.h>
int is_palindrome(char ar[]){
    int lenght = strlen(ar);
    int i=0, j=lenght-1 , palindrome = 1;
    while(i<j){
       
        if(ar[i]==ar[j]){
            i++;
            j--;
        }
        else if(ar[i]!= ar[j]){
            palindrome=0;
            break;
        }
    }
    return palindrome;
}
int main()
{
    char arr[1001];
    scanf("%s",arr);
    int pal = is_palindrome(arr);
    if(pal ==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}