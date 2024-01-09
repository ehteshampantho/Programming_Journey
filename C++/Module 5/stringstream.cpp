#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ab;
    ab<<s;
    string word;
    while(ab>>word){
        cout<<word<<endl;
    }
    return 0;
}