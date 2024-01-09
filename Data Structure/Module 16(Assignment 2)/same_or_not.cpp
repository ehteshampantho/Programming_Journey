#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    bool flag = true;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    if(st.size() != q.size()){
        flag = false;
        // cout<<"NO"<<endl;
    }
    else{
        while(!st.empty()){
            int k1,k2;
            k1 = st.top();
            k2 = q.front();
            st.pop();
            q.pop();
            if(k1 != k2){
                flag = false;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}