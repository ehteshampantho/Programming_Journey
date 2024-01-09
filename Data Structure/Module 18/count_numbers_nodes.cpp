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

int count_numbers(Node * root){
    // base case
    if(root == NULL) return 0;
    int l = count_numbers(root->left);
    int r = count_numbers(root->right);
    return l+r+1;
}

int main(){
    Node * root = input_tree();
    cout<< count_numbers(root) << endl;
    return 0;
}