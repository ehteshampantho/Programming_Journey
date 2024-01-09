#include<stdio.h>

void capital_to_small(void){
    char c;
    scanf("%c",&c);
    char ch = c + 32;
    printf("%c",ch);
    return;
}

int main(){
    // char c;
    // scanf("%c",&c);
    capital_to_small();
    // printf("%c",s);
    return 0;
}