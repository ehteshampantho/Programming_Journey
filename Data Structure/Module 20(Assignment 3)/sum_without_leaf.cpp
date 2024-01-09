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
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> q;
    if(root) q.push(root);
    while(!q.empty()){
        // 1. ber kore ana
        Node * p = q.front();
        q.pop();

        // 2. jabotio kaj
        int l,r;
        cin>>l>>r;
        Node * myLeft;
        Node * myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke rakha
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void level_order(Node * root){
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        // 1. ber kore ana
        Node * f = q.front();
        q.pop();

        // 2. jabotio kaj
        cout<<f->val<<" ";

        // 3. children gulo rakha
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int leaf_sum = 0;

int sum_of_nodes(Node * root){
    
    int sum = 0;
    if(root == NULL) return 0;
    if(root) sum += root->val;
    if(root->left == NULL && root->right == NULL){
        leaf_sum += root->val;
    }
    int l = sum_of_nodes(root->left);
    int r = sum_of_nodes(root->right);
    return sum = sum + l + r;
}


int main(){
    Node * root = input_tree();
    // level_order(root);
    cout<< sum_of_nodes(root)-leaf_sum<< endl;

    return 0;
}