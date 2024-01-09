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

void insert(Node * &head,Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int size_same(Node * head){
    Node * tmp = head;
    int count=0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main(){
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val;

    while(true){
        cin>>val;
        if(val == -1) break;
        insert(head1, tail1, val);
    }
    while(true){
        cin>>val;
        if(val == -1) break;
        insert(head2, tail2, val);
    }

    if(size_same(head1) == size_same(head2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    return 0;
}