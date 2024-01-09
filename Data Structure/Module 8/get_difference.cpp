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

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert(head, tail, val);
    }

    int max = INT_MIN;
    for(Node * i=head; i != NULL; i=i->next){
        if(i->val > max){
            max = i->val;
        }
    }

    // cout<<max<<endl;

    int min = INT_MAX;
    for(Node * i=head; i != NULL; i=i->next){
        if(i->val < min){
            min = i->val;
        }
    }

    // cout<<min<<endl;

    cout<<max - min<<endl;

    return 0;
}