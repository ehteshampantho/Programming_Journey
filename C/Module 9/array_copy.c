#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    int a[n+m];
    for(int i=0;i<n;i++){
        a[i]=arr[i];
    }

    int i=n,j=0;
    while(i<n+m){
        a[i]=b[j];
        i++;
        j++;
    }

    for(int i=0;i<n+m;i++){
        printf("%d ",a[i]);
    }
    return 0;
}