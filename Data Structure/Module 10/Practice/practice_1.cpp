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

void same(Node * head1, Node * head2){
    Node * tmp1 = head1;
    Node * tmp2 = head2;
    int flag = true;
    if(size(head1) != size(head2)){
        cout<<"NO"<<endl;
        return;
    }
    else{
        while(tmp1 != NULL){
            if(tmp1->val != tmp2->val){
                // cout<<"NO"<<endl;
                flag = false;
                break;
            }
            else{
                // cout<<"YES"<<endl;
                flag = true;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

void print_normal(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    Node * head1 = NULL;
    Node * head2 = NULL;

    Node * tail1 = NULL;
    Node * tail2 = NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert(head1,tail1,val);
    }
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert(head2,tail2,val);
    }

    same(head1,head2);
    
    // print_normal(head1);
    // print_normal(head2);
    return 0;
}