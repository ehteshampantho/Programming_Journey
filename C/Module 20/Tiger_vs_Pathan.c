#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        int tiger =0, pathan =0;
        for(int i=0;i<n;i++){
            if(a[i] == 'T'){
                tiger++;
            }
            else if(a[i] == 'P'){
                pathan++;
            }
        }
        if(tiger > pathan){
            printf("Tiger\n");
        }
        else if(pathan > tiger){
            printf("Pathaan\n");
        }
        else if(tiger == pathan){
            printf("Draw\n");
        }
    }
    return 0;
}