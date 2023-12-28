#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int number[n];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int countTwo = 0 , countThree =0 ;
    for(int i=0;i<n;i++){
        if(number[i]%2==0){
            countTwo++;
        }
        else if(number[i]%3==0){
            countThree++;
        }
    }
    printf("%d %d",countTwo,countThree);
    return 0;
}