#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1st method
    int n;
    cin>>n;
    /* vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    } */
    
    // 2nd method
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(string val: v){
        cout<<val<<endl;
    }

    return 0;
}