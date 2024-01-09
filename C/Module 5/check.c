#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);

    int min,max;
    min = max = A;
    if(B < min){
        min = B;
    }
    else{
        max = B;
    }

    if(C < min){
        min = C;
    }
    else{
        max = C;
    }
    printf("%d %d",min, max);
    return 0;
}