#include<stdio.h>

void fun(int a[],int i){
    if(i < 0) return;
    
    if(i%2==0){
        printf("%d ",a[i]);
    }
    fun(a,i-1);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n-1);
    return 0;
}