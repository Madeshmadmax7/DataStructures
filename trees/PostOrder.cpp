#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int data){
        this->data=data;
        right = left = NULL;
    }
};
Node* createNode(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Node* root = new Node(val);
    root->left=createNode();
    root->right=createNode();
    return root;
}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=createNode();
    postorder(root);
}