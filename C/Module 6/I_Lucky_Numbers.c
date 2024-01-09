#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    
        a = n % 10;
        n = n / 10;
        if(a%n==0 || n%a==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    
    return 0;
}