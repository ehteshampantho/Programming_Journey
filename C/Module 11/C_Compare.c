#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s\n%s\n",a,b);

    int val = strcmp(a,b);
    
    if(val<0){
        printf("%s\n",a);
    }
    else if(val>0){
        printf("%s\n",b);
    }
    else{
        printf("%s\n",a);
    }
    return 0;
}