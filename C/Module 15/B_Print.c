#include<stdio.h>

void print(int x){
    for(int i=1;i<=x;i++){
        printf("%d",i);
        if(i<x){
            printf(" ");
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}