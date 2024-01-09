#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cin>>a>>c>>b;
    int res = 0;
    if(c == '>'){
        if(a>b) res = 1;
    }
    else if(c == '<'){
        if(a<b) res = 1;
    }
    else if(c == '='){
        if(a == b) res = 1;
    }
    
    if(res){
        cout<<"Right"<<endl;
    } 
    else{
        cout<<"Wrong"<<endl;
    }
    return 0;
}