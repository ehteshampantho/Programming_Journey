#include<stdio.h>

void max_min(int a[],int x, int *min, int *max){
    *min = a[0];
    *max = a[0];
    for(int i=1;i<x;i++){
        if(a[i]>*max){
            *max = a[i];
        }
        else if(a[i]<*min){
            *min = a[i];
        }
    }
    
}


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min,max;
    max_min(a,n,&min,&max);
    
    printf("%d %d",min,max);
    return 0;
}