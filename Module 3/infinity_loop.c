#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if (n > 1500)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if(n>1000){
        printf("I will buy Punjabi");
    }
    else{
        printf("Bad luck!");
    }
}
