#include<stdio.h>

int fib(int n){
    if( n <= 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}    

int main(){
    int n;
    scanf("%d",&n);
    int res = fib(n);
    printf("%d",res);
    return 0;
}