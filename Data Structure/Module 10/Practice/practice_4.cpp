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
            this->prev = NULL;
        }
};

void insert_at_head(Node * &head,Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_pos(Node * head,int pos,int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    tmp->next->prev = tmp;
    tmp->next->next->prev = newNode;
}

void insert(Node * &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;  
}

int size(Node * head){
    Node * tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void reverse(Node * head,Node * tail){
    Node * i = head;
    Node * j = tail;
    while(i != j && i->next != j){
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
}

void print_reverse(Node * n){
    // base case
    if(n == NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}

void print_normal(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main(){
    Node * head = NULL;
    Node * tail = NULL;

    int q;
    cin>>q;
    while(q--){
        int x,val;
        cin>>x>>val;
        if(x == 0){
            insert_at_head(head,tail,val);
            print_normal(head);
            cout<<endl;
            print_reverse(head);
            cout<<endl;
        }
        else if(x == size(head)){
            insert(head,tail,val);
            print_normal(head);
            cout<<endl;
            print_reverse(head);
            cout<<endl;
        }
        else if(x > size(head)){
            cout<<"Invalid"<<endl;
        }
        else{
            insert_at_pos(head,x,val);
            print_normal(head);
            cout<<endl;
            print_reverse(head);
            cout<<endl;
        }
    }

    return 0;
}