#include<stdio.h>
int main(){
    int n,s1,k;
    scanf("%d",&n);
    int line = ((n+1)/2)+5;
    s1=line-1;
    k=1;
    for(int i=0;i<line;i++){
        for(int j=0;j<s1;j++){
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("*");
        }
        s1--;
        k+=2;
        printf("\n");
    }
    int s2 = ((line*2)-1-n)/2;
    for(int i=0;i<5;i++){
        for(int j=0;j<s2;j++){
            printf(" ");
        }
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}