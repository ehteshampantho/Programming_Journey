#include<stdio.h>

long long int fun(long long int a[],int i){
    if(i < 0) return 0;
    return a[i] + fun(a,i-1);
    
}

int main(){
    int n,sum=0;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    long long int s = fun(arr,n-1);
    
    printf("%lld",s);
    return 0;
}