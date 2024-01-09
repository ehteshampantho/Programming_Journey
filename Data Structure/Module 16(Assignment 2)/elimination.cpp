#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        stack<int> st;
        string s;
        cin>>s;
        for(char c:s){
            if(st.empty()){
                st.push(c);
            }
            else{
                if(c == '0'){
                    st.push(c);
                }
                else if(c == '1' && st.top() == '0'){
                    st.pop();
                }
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}