#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0;s[i]!='\0';i++){
        if(s[i] != ' '){
            cout<<s[i];
        }
    }
    return 0;
}