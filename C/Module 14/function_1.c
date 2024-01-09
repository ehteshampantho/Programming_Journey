#include<stdio.h>

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int main(){

    int s = sum(10,20);
    printf("%d\n",s);
    return 0;
}