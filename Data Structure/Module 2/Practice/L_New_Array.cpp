#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector<int> v(v2);
    v.insert(v.end(),v1.begin(),v1.end());
    for(int val: v){
        cout<<val<<" ";
    }
    return 0;
}