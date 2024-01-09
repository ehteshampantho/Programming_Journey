#include<stdio.h>

int my_len(char a[]){
    int count = 0;
    for(int i =0; a[count]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char a[100];
    scanf("%s",a);
    int res = my_len(a);
    printf("%d",res);
    return 0;
}