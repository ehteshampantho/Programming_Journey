#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if( (c >= 'A' && c<='Z') || (c>='a') && (c<='z') ){
        cout<<"ALPHA"<<endl;
        if((c >= 'A' && c<='Z')){
            cout<<"IS CAPITAL"<<endl;
        }
        else if((c>='a') && (c<='z')){
            cout<<"IS SMALL"<<endl;
        }
    }
    else if(c>='0' && c<='9'){
        cout<<"IS DIGIT"<<endl;
    }
}