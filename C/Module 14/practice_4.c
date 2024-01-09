#include<stdio.h>

void small_to_capital(void){
    char c;
    scanf("%c",&c);
    char ch = c - 32;
    printf("%c",ch);
    return;
}

int main(){
    // char c;
    // scanf("%c",&c);
    small_to_capital();
    // printf("%c",s);
    return 0;
}