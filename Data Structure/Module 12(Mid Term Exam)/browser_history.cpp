#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        string s;
        Node * next;
        Node * prev;
        Node(string s){
            this->s = s;
            this->next= NULL;
            this->prev = NULL;
        }
};

void insert(Node * &head,Node * &tail, string s){
    Node * newNode = new Node(s);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// void print_normal(Node * head){
//     Node * tmp = head;
//     while(tmp != NULL){
//         cout<<tmp->s<<" ";
//         tmp = tmp->next;
//     }
// }

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    string ss;
    while(true){
        cin>>ss;
        if(ss == "end") break;
        insert(head,tail,ss);
    }

    Node * cur = head;
    int q;
    cin>>q;
    while(q--){
        string cmd, addr;
        cin>>cmd;
        bool flag = true;
        // for(Node * i=head; i != NULL; i=i->next){
            if(cmd == "visit"){
                cin>>addr;
                for(Node * i=head;i != NULL; i=i->next){
                    if(i->s != addr){
                        // cout<<"Not Available"<<endl;
                        flag = false;
                    }
                    else if(i->s == addr){
                        cout<<i->s<<endl;
                        cur = i;
                        flag = true;
                        break;
                    }
                }
            }
            else if(cmd == "prev"){
                if(cur->prev != NULL){
                    cout<<cur->prev->s<<endl;
                    cur = cur->prev;
                    flag = true;
                }
                else{
                    // cout<<"Not Available"<<endl;
                    flag = false;
                }
            }
            else if(cmd == "next"){
                if(cur->next != NULL){
                    cout<<cur->next->s<<endl;
                    cur = cur->next;
                    flag = true;
                }
                else{
                    // cout<<"Not Available";
                    flag = false;
                }
            }

            if(flag == false){
                cout<<"Not Available"<<endl;
            }
        // }
    }
    // print_normal(head);
    return 0;
}