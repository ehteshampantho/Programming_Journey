#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vector<ll> occur(1e8+5,0);

    while(t--){
        ll x,val;
        cin>>x;
        if(x==1){
            cin>>val;
            pq.push(val);
            occur[val]++;
        }
        else if(x==2){
            // while(!pq.empty() && occur[pq.top()] == 0){
            //     pq.pop();
            // }
            if(pq.empty()) cout<<"empty"<<"\n";
            else{
                ll minVal = pq.top();
                cout<< minVal << "\n";
                while(occur[minVal] != 0){
                    pq.pop();
                    occur[minVal]--;
                }
            }
        }
    }
    return 0;
}