#include<stdio.h>
#include<string.h>
int main(){
    
    char a[100],b[100];
    scanf("%s %s",a,b);

    for(int i=0;i<=strlen(b);i++){
        a[i]=b[i];
    }

    char c[100],d[100];
    scanf("%s %s",c,d);
    strcpy(c,d);
    printf("%s %s %s %s",a,b,c,d);
    return 0;
}