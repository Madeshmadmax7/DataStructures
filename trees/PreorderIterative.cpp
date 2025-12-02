#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node* createNode(){
    int val;
    cin>>val;
    if(val==-1) return NULL;
    Node* root=new Node(val);
    root->left=createNode();
    root->right=createNode();
    return root;
}
void preorder(Node* root){
    stack<Node*> stk;
    stk.push(root);
    while(!stk.empty()){
        Node* front=stk.top();
        cout<<front->data<<" ";
        stk.pop();
        if(front->right!=NULL) stk.push(front->right);
        if(front->left!=NULL) stk.push(front->left);
    }
}
int main(){
    Node* root=createNode();
    preorder(root);
}