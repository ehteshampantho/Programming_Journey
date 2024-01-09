#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "Hello";
    string b = "World";
    a+=b;
    cout<<a<<endl<<b<<endl;
    a.append(b);
    cout<<a<<endl;

    a=a+"A";
    cout<<a<<endl;
    b.push_back('A');
    cout<<b<<endl;
    a.pop_back();
    cout<<a<<endl;

    a="Gello";
    cout<<a<<endl;
    a.assign("GelloWorld");
    cout<<a<<endl;
    // a.erase(4,3);
    a.replace(4,3,"so");
    a.insert(4,"to");
    cout<<a<<endl;
    return 0;
}