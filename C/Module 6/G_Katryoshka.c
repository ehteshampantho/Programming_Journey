#include<stdio.h>
int main(){
    long long int n,m,k,res=0;
    scanf("%lld %lld %lld",&n,&m,&k);

    if(n==0 || k==0){
        printf("0\n");
    }
    else{
        long long int a=n;
        if(m<a){
            a=m;
        }
        if(k<a){
            a=k;
        }
        res+=a;
        n-=a;
        m-=a;
        k-=a;
        if(n/2<k){
            res+=n/2;
        }
        else{
            res+=k;
        }
        printf("%lld\n",res);
    }

    return 0;
}