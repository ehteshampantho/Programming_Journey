#include<stdio.h>
#include<math.h>
int main(){
    
    int t;
    scanf("%d",&t);
    int m1,m2,d;
    
    for(int i=1;i<=t;i++){
        scanf("%d %d %d\n",&m1,&m2,&d);
        
        int res = d*m1;
        float res2 = (res*1.00)/(m1+m2);
        int res3 = res2;
        int f_res = d - res3;
        printf("%d\n",f_res);
    }
    

    return 0;
}