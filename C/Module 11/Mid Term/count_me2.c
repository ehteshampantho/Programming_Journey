#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s",s);
    int count = 0;
    for(int i=0;i<strlen(s);i++){
        if(s[i] == 'a'){
            count++;
        }
        else if(s[i] == 'e'){
            count++;
        }
        else if(s[i] == 'i'){
            count++;
        }
        else if(s[i] == 'o'){
            count++;
        }
        else if(s[i] == 'u'){
            count++;
        }
    }

    int res = strlen(s) - count;
    printf("%d",res);
    return 0;
}