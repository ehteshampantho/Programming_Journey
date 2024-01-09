#include <stdio.h>
#include <string.h>
 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int cnt[m+1];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(int i=0;i<=m;i++){
        cnt[i] = 0;
    }
    
    for(int i=0;i<n;i++){
        cnt[arr[i]]++;
    }
    
    for(int i=1;i<=m;i++){
        // if(cnt[i]>0){
            printf("%d\n",cnt[i]);
        // }
        
    }
 
    return 0;
}