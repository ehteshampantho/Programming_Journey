#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],i});
        }

        sort(v.begin(),v.end());

        if(v[n-1].second > v[n-2].second){
            cout << v[n-2].second <<" "<<v[n-1].second << endl;
        }
        else{
            cout << v[n-1].second << " " << v[n-2].second<<endl;
        }
    }
    return 0;
}