#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left=NULL;
    Node*right =NULL;
    Node(int data){
        this->data=data;
    }
};
Node* createNode(){
    int data;
    cin>>data;
    if(data==-1) return NULL;
    Node* root=new Node(data);
    root->left=createNode();
    root->right=createNode();
    return root;
}
void inorder(Node* root){
    stack<Node*>stk;
    Node* node=root;
    while(true){
        if(node!=NULL){
            stk.push(node);
            node=node->left;
        }
        else{
            if(stk.empty()) break;
            Node* front = stk.top();
            cout<<front->data<<" ";
            stk.pop();
            node=front->right;
        }
    }
}
int main(){
    Node* root=createNode();
    inorder(root);
}