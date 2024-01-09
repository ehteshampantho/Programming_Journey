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

void insert_at_head(Node * &head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node * &head,int val){
    Node * newNode = new Node(val);
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

void delete_node(Node * head, int pos){
    Node * tmp = head;
    if(head == NULL){
        // cout<<endl<<"Head is not available"<<endl<<endl;
        return;
    }
    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
        if(tmp == NULL){
            return;
        }
    }
    if(tmp->next == NULL){
        // cout<<endl<<"Invalid Index"<<endl<<endl;
        return;
    }
    Node * deleteNode = tmp->next;
    
    tmp->next = tmp->next->next;

    delete deleteNode;
}

void delete_head(Node * &head){
    if(head == NULL){
        // cout<<endl<<"Head is not available"<<endl<<endl;
        return;
    }
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    Node * head = NULL;

    int q;
    cin>>q;
    while(q--){
        int x,val;
        cin>>x>>val;
        if(x == 0){
            insert_at_head(head,val);
        }
        else if(x == 1){
            insert_at_tail(head,val);
        }
        else if(x == 2){
            if(val == 0){
                delete_head(head);
            }
            else{
                delete_node(head,val);
            }
        }
        print_linked_list(head);
    }  
    return 0;
}