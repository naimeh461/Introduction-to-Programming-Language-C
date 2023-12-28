#include<stdio.h>
#include<string.h>
int main()
{
    char x[21];
    char y[21];

    scanf("%s",x);
    scanf("%s",y);

    int i=0;
    while(1){
        if(x[i]=='\0' && y[i]=='\0'){
            printf("both are equal");
            break;

        }
        else if(x[i]=='\0'){
            printf("x is small");
            break;
        }
        else if(y[i]=='\0'){
            printf("y is small");
            break;
        }

        if(x[i]==y[i]){
            i++;
        }
        else if(x[i]>y[i]){
            printf("y is small");
            break;
        }
        else{
            printf("x is small");
            break;
        }
    }
    return 0;
}