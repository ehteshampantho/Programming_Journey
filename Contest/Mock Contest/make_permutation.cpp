#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e4; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> cnt(maxN+1,0);

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }

        int zero = 0;
        for(int i=1;i<=n;i++){
            if(cnt[i] == 0){
                zero++;
            }
        }

        if(k>=zero) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }

    return 0;
}