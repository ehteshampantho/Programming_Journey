#include<stdio.h>

int count_before_one(int a[],int x){
    int count = 0;
    for(int i=0;i<x;i++){
        if(a[i] == 1){
            break;
        }
        count++;
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int res = count_before_one(arr,n);
    printf("%d",res);
    return 0;
}