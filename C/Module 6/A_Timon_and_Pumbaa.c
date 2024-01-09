#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a-b;
    if(c>=0){
        printf("%d\n",c);
    }
    else{
        printf("0\n");
    }
    return 0;
}