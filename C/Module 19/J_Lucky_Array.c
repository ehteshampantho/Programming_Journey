/* This solution is vague due to Negative integers which can not be handled with frequency array */


#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[10];
    for(int i=0;i<10;i++){
        cnt[i] = 0;
    }
    for(int i=0;i<n;i++){
        int val = a[i];
        cnt[val]++;
    }
    int min=INT_MAX;
    for(int i=0;i<10;i++){
        if(cnt[i] != 0){
            // printf("%d - %d\n",i,cnt[i]);
            if(i<min){
                min = i;
            }
        } 
    }
    // printf("%d",cnt[min]);
    if(cnt[min]%2==1){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }
    return 0;
}