#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // string:: iterator it;
    cout<<*s.begin()<<endl;    
    cout<<*(s.end()-1)<<endl;
    for(auto it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}