#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1 += a[i][j];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j == n-1){
                sum2 += a[i][j];
            }
        }
    }
    

    int res = (sum1-sum2);

    printf("%d",abs(res));

    return 0;
}