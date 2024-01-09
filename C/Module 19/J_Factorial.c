#include<stdio.h>

long long int fun(long long int i){
    if(i == 0) return 1;
    long long int fact = i * fun(i-1);
    return fact;
}

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int res = fun(n);
    printf("%lld",res);
    return 0;
}