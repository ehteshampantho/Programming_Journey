#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int x,flag=0;
    scanf("%d",&x);
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                flag=1;
            }
        }
    }
    if(flag){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}