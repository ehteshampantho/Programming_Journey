#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node * next;
        Node(int val){
            this->val = val;
            this->next= NULL;
        }
};

void insert_at_tail(Node * &head, int v){
    Node * newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }    
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void order(Node * head){
    Node * tmp = head;
    bool flag = false;
    while(true){
        if(tmp->next == NULL){
            break;
        }
        else{
            if(tmp->val < tmp->next->val){
                flag = true;
            }
            else{
                flag = false;
            }
            tmp = tmp->next;
        }
    }
    
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
}

int main(){
    Node * head = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, val);
    }
    order(head);  
    return 0;
}