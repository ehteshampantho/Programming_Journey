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

void middle(Node * head){
    Node * tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    int pos = cnt/2;
    tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
    }
    if(pos%2 == 0){
        cout<<tmp->next->val<<endl;
    }
    else{
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
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
    middle(head);  
    return 0;
}