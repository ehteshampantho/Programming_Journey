#include<stdio.h>
#include<math.h>
int main(){
    int x,p;
    scanf("%d %d",&x,&p);
    float before_discount = (p*100.00)/(100.00-x);
    printf("%0.2f",before_discount); 
    return 0;
}