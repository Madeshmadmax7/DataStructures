#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left=NULL,*right=NULL;
    Node(int data){
        this->data=data;
    }
};
Node* createNode(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* newNode=new Node(data);
    newNode->left=createNode();
    newNode->right=createNode();
    return newNode;
}
int checkBinary(Node* root){
    if(root==NULL) return 0;
    int lh = checkBinary(root->left);
    if(lh==-1) return -1;
    int rh = checkBinary(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}

int main(){
    Node* root=createNode();
    int res = checkBinary(root);
    cout<<res;
}