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

void insert(Node * &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void middle(Node * head){
    Node * tmp = head;
    int count=0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    int pos = count/2;
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
    Node * tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert(head, tail, val);
    }

    middle(head);

    return 0;
}