#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;
    Node(int d){
        data=d;
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
void postorder(Node* root){
    stack<Node*> stk1;
    stack<Node*> stk2;
    stk1.push(root);
    while(!stk1.empty()){
        Node* front=stk1.top();
        stk2.push(front);
        stk1.pop();
        if(front->left!=NULL){
            stk1.push(front->left);
        }
        if(front->right!=NULL){
            stk1.push(front->right);
        }
    }
    while(!stk2.empty()){
        Node* top = stk2.top();
        stk2.pop();
        cout<<top->data<<" ";
    }
}
int main(){
    Node* root=createNode();
    postorder(root);
}