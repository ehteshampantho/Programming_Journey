#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> qu;
    int q;
    cin>>q;
    while(q--){
        int n;
        string name;
        cin>>n;
        
        if(n == 0){
            cin>>name;
            qu.push(name);
        }
        else if(n == 1){
            if(qu.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
                cout<< qu.front() << endl;
                qu.pop();
            }
        }
    }
    
    return 0;
}