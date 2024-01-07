#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
       if(a[0]== a[i]){
         count++;
       }
    }
    if(count%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    return 0;
}