#include<stdio.h>

int my_abs(int a){
    int res;
    if(a<0){
        res = a*-1;
    }
    else{
        res = a; 
    }
    return res; 
}

int main(){
    int x;
    scanf("%d",&x);
    int res = my_abs(x);
    printf("%d\n",res);
    return 0;
}