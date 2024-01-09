#include<stdio.h>

int sum(int x,int y){
    int add = x + y;
    return add;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int s = sum(a,b);
    printf("%d\n",s);
    return 0;
}