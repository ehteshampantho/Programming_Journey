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

void duplicate(Node * head){
    Node * tmp = head;
    int cnt[100] = {0};
    while(tmp != NULL){
        cnt[tmp->val]++;
        tmp = tmp->next;
    }
    bool flag = false;
    for(int i=0;i<100;i++){
        if(cnt[i]>1){
            flag = true;
        }
        // else{
        //     flag = false;
        // }
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
    duplicate(head);  
    return 0;
}