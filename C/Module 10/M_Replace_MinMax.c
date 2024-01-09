#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min_idx=0,max_idx=0,min=arr[0],max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            min_idx = i;
        }
        if(arr[i]>max){
            max = arr[i];
            max_idx = i;
        }
    }

    int tmp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = tmp;

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}