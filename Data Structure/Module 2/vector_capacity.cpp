#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(20);
    // cout<<v.capacity()<<endl;
    v.push_back(30);
    // cout<<v.capacity()<<endl;
    v.push_back(40);
    // cout<<v.capacity()<<endl;
    v.push_back(50);
    // cout<<v.capacity()<<endl;
    // v.clear();
    v.resize(2);
    v.resize(7,19);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // cout<<v[2]<<endl;
    return 0;
}