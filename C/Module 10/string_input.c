#include<stdio.h>
int main(){
    char a[6];
    for(int i=0;i<6;i++){
        scanf("%c",&a[i]);
    }
    for(int i=0;i<6;i++){
        printf("%c\n",a[i]);
    }

    int b[5];
    int sz = sizeof(b)/sizeof(int);
    printf("%d",sz);
    return 0;
}