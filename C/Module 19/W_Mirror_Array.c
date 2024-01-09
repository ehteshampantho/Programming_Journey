#include<stdio.h>
int main(){
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%lld", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            printf("%lld ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}