#include<stdio.h>
#include<string.h>

int is_palindrome(char c[]){
    int i=0, j=strlen(c)-1, flag = 0;
    if(strlen(c)==1){
        flag = 1;
    }
    else if(strlen(c)>1){
        for(i=0;i<j;i++){
            if(c[i] == c[j]){
            flag = 1;
        }
        else if(c[i] != c[j]){
            flag = 0;
            break;
        }
        j--;
    }
        
}    
    
    return flag;
}

int main(){
    char a[1001];
    scanf("%s",a);
    int s = is_palindrome(a);
    if(s == 1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}