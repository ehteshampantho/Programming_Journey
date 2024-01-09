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

int size(Node * head){
    Node * tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void same(Node * head1, Node * head2){
    Node * tmp1 = head1;
    Node * tmp2 = head2;
    bool flag = true;
    if(size(head1) != size(head2)){
        cout<<"NO"<<endl;
        return;
    }
    else{
        while(tmp1 != NULL){
            if(tmp1->val != tmp2->val){
                flag = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

    same(head1,head2);

    return 0;
}