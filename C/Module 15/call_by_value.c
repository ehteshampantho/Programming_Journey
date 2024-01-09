#include<stdio.h>

void fun(int x){
    x= 100;
    printf("fun er x er value: %d\n", x);
    printf("fun er x er address: %p\n", &x);
}

int main(){
    
    int x = 10;
    
    fun(x);
    printf("main er x er value: %d\n",x);
    printf("main er x er address: %p\n",&x);

    return 0;
}