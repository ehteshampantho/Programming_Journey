#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello World";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s.size()<<endl;
    if(s.empty()==true) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    s="Hello_World";
    cout<<s<<endl;
    s.resize(8);
    cout<<s<<endl;
    s.resize(12,'X');
    cout<<s<<endl;
    return 0;
}