#include<stdio.h>
#include<string.h>
int main(){
    
    char a[1001];
    scanf("%s",a);

    int l = strlen(a),flag = 1,j=0,k=l-1;

    
    while(j<k){
        if(a[j] == a[k]){
            j++;
            k--;
        }
        else{
            flag = 0;
            break;
        }
    }
    
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}