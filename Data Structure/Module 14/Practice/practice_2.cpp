#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    if(st.size() != q.size()){
        cout<<"NO"<<endl;
    }
    else{
        int k1,k2;
        bool flag = true;
        while(!st.empty()){
            k1 = st.top();
            k2 = q.front();
            st.pop();
            q.pop();
            if(k1 != k2){
                flag = false;
                break;
            } 
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}