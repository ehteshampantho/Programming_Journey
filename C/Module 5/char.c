#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);

    if(c >= 'a' && c <= 'z'){
        int ans = c - 32;
        printf("%c",ans);
    }
    else{
        int ans = c + 32;
        printf("%c",ans);
    }
    return 0;
}