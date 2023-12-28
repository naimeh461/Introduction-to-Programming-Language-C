#include<stdio.h>
int main()
{
        char c;
        int cnt[26]={0};
        while(scanf("%c",&c)!= EOF){
            cnt[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]!= 0){
                printf("%c : %d\n",i+'a',cnt[i]);
            }
        }
    
    return 0;
}