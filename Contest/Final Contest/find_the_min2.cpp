#include<bits/stdc++.h>
// #define int long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    vector<int> v;
    int ans = INT_MAX;

    while(t--){
        int x,val;
        cin>>x;
        if(x==1){
            cin>>val;
            v.push_back(val);
            ans = min(ans,val);
        }
        else if(x==2){
            if(v.empty()) cout<<"empty"<<"\n";
            else{
                /* sort(v.begin(),v.end(),greater<int>());
                cout<< v.back() <<"\n";
                int ans = v.back();
                // v.pop_back();
                auto it = find(v.begin(),v.end(),ans);
                while(it != v.end()){
                    v.pop_back();
                } */

                cout << ans << "\n";
                // remove(v.begin(),v.end(),ans);
                for(int i=0;i<v.size();i++){
                    if(v[i] == ans){
                        v.erase(v.begin()+i);
                    }
                }
            }
        }
    }
    return 0;
}