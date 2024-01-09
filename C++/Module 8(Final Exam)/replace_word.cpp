#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,f;
        cin>>s>>f;
        while(s.find(f) != -1){
            s.replace(s.find(f),f.size(),"#");
        }
        cout<<s<<endl;
    }
    return 0;
}