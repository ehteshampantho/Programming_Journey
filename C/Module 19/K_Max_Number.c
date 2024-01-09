#include<stdio.h>
#include<limits.h>

int max(int a[],int s,int i){
    if(i == s) return INT_MIN;
    int mx = max(a,s,i+1);
    if(a[i]>mx){
        return a[i];
    }
    else{
        return mx;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res = max(a,n,0);
    printf("%d\n",res);
    return 0;
}