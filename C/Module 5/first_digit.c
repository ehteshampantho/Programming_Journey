#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans = n/1000;
    if(ans % 2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}