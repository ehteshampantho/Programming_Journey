#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int val: v){
        if(val > 0){
            replace(v.begin(),v.end(),val,1);
        }
        else if(val < 0){
            replace(v.begin(),v.end(),val, 2);
        }
    }
    for(int val: v){
        cout<<val<<" ";
    }
    return 0;
}