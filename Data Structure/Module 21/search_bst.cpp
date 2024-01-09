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

Node * input_tree(){
    int val;
    cin>>val;
    Node * root;
    queue<Node *> q;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty()){
        Node * pr = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myLeft;
        Node * myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r); 

        pr->left = myLeft;
        pr->right = myRight;

        if(pr->left) q.push(pr->left);
        if(pr->right) q.push(pr->right);
    }
    return root;
}

void level_order(Node * root){
    queue<Node *> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * f = q.front();
        q.pop();

        cout<< f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

bool findVal(Node * root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val){
        bool l = findVal(root->left,x);
        return l;
    }
    else{
        return findVal(root->right,x);
    }
}

int main(){
    Node * root = input_tree();
    // level_order(root);
    if(findVal(root,100)) cout<< "Yes, Found" <<endl;
    else cout<< "No, Not Found" <<endl;
    return 0;
}