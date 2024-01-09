#include<stdio.h>

int count_odd(int a[], int x){
    int c = 0;
    for(int i=0;i<x;i++){
        if(a[i]%2 == 1){
            c++;
        }
    }
    return c;

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = count_odd(arr,n);
    printf("%d\n",count);
    return 0;
}