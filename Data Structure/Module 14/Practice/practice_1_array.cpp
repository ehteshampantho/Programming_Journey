#include<bits/stdc++.h>
using namespace std;

class myStack{
public:    
    vector<int> v;
    
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if(size() == 0) return true;
        else return false;
    }
};

int main(){
    myStack st1, st2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        st2.push(x);
    }
    if(st1.size() != st2.size()){
        cout<<"NO"<<endl;
    }
    else{
        int k1,k2;
        bool flag = true;
        while(!st1.empty()){
            int k1 = st1.top();
            int k2 = st2.top();
            st1.pop();
            st2.pop();
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