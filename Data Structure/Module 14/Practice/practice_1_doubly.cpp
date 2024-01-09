#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node * next;
        Node * prev;
        Node(int val){
            this->val = val;
            this->next= NULL;
            this->prev= NULL;
        }
};

class myStack{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;
        void push(int val){
            sz++;
            Node * newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        void pop(){
            sz--;
            Node * deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            }
            else{
                tail->next = NULL;
            }
            delete deleteNode;
        }
        int top(){
            return tail->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            if(sz == 0) return true;
            else return false;
        }
};

int main(){
    myStack st1,st2;
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