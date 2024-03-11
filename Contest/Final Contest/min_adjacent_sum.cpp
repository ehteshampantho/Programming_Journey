#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = 1e9+5;
    ll i,j;
    for(i=0,j=n;i < n/2;i++,j--){
        swap(a[i],a[j]);
        ll sum = a[i]+a[j];
        ans = min(ans,sum);
    }

    cout << ans << "\n";
    return 0;
}