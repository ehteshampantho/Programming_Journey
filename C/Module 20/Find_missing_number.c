#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        long long int mul; 
        long long int a,b,c,x,res=0;
        scanf("%lld %lld %lld %lld",&mul,&a,&b,&c);
        
        x = mul/(a*b*c);

        if(mul == 0){
            res = 0;
        }
        else if(mul != (a*b*c*x)){
            res = -1;
        }
        else if(mul == (a*b*c*x)){
            res = x;
        } 
        printf("%lld\n",res);
    }
    
    return 0;
}