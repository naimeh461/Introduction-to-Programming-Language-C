// #include<stdio.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s", a,b);
//     int i=0;
//     while(1)
//     {
//         if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("Same");
//             break;
//         }
//         else if(a[i]=='\0'){
//             printf("a is smaller");
//             break;
//         }
//         else if(b[i]=='\0'){
//             printf("b is smaller");
//             break;
//         }
//         if(a[i]==b[i]){
//             i++;
//         }
//         else if(a[i]> b[i]){
//             printf("A choto\n");
//             break;
//         }
//         else
//         {
//             printf("B choto\n");
//         }

//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s", a,b);
    int i=0;
    int v=strcmp(a,b);
    if(v<0){
        printf("A is smaller\n");
    }
    else if(v>0){
        printf("B is smaller\n");
    }
    else{
        printf("Both are same");
    }
    return 0;
}