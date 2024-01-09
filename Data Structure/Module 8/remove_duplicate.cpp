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


void delete_n(Node * head, int val){
    Node * tmp2 = head;
    while(tmp2->next != NULL){
        if(tmp2->next->val == val){
            Node * deleteNode = tmp2->next;
            tmp2->next = tmp2->next->next;
            delete deleteNode;
        }
        else{
            tmp2 = tmp2->next;
        }
    }
}

void remove_duplicate(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        delete_n(tmp,tmp->val);
        tmp = tmp->next;
    }
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
    Node * tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert(head, tail, val);
    }

    remove_duplicate(head); 
    print_linked_list(head);   
    return 0;
}