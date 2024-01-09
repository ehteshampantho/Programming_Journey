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

// void print_list(Node * head){
//     Node * tmp = head;
//     while(tmp != NULL){
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
// }



int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int t;
    cin>>t;
    while(t--){
        int val;
        while(true){
            cin>>val;
            if(val == -1) break;
            insert(head, tail, val);
        }

        // print_list(head);

        int x;
        cin>>x;

        int count = 0;
        bool flag = false;
        for(Node * i=head;i != NULL; i=i->next){
            count++;
            if(i->val == x){
                // cout<<count<<endl;
                flag = true;
                break;
            }
            else{
                flag = false;
            }
        }

        head = NULL;
        tail = NULL;

        if(flag) cout<<count-1<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}