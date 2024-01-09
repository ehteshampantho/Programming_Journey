#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,n, sum = 0;
    cin>>x>>n;
    for(int i=2;i<=n;i+=2){
        sum += pow(x*1.00,i*1.00);        
        // cout<<x<<" "<<i<<" "<<sum<<endl;
    }
    cout<<sum;
    return 0;
}