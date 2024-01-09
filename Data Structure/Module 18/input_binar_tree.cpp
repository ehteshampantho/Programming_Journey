#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node * left;
        Node * right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_tree(){
    int val;
    cin>>val;
    Node * root;
    queue<Node*> q;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty()){
        // 1. ber kore ana
        Node * p = q.front();
        q.pop();

        // 2. jabotio kaj
        int l,r;
        cin>>l>>r;
        Node * myLeft;
        Node * myRi8;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRi8 = NULL;
        else myRi8 = new Node(r);

        p->left = myLeft;
        p->right = myRi8;

        // 3. children gulo ke rakha
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;  
}

void level_order(Node * root){
    if(root == NULL) cout<< "Tree nai" <<endl;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // 1. Node ber kore ana
        Node * f = q.front();
        q.pop();

        // 2. jabotio kaj kora
        cout<< f->val << " ";

        // 3.children gulo ke rakha
        if(f->left != NULL) q.push(f->left); 
        if(f->right != NULL) q.push(f->right); 
    }
}



int main(){
    Node * root = input_tree();
    level_order(root);
    
    return 0;
}