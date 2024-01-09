#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int div_2=0,div_3=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0 && arr[i]%3==0){
            div_2++;
        }
        else if(arr[i]%2==0){
            div_2++;
        }
        else if(arr[i]%3==0){
            div_3++;
        }
    }
    printf("%d %d",div_2,div_3);
    return 0;
}