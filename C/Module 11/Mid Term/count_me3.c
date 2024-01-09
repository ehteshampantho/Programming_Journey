#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        char s[10001];
        scanf("%s",s);
        int cap=0,sml=0,dig=0;
        for(int i=0; s[i] !='\0'; i++){
            if(s[i]>='A' && s[i]<='Z'){
            cap++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            sml++;
        }
        else if(s[i]>='0'&& s[i]<='9'){
            dig++;
        }
    }
    
    printf("%d %d %d\n",cap,sml,dig);
            
    }
    
    return 0;
}