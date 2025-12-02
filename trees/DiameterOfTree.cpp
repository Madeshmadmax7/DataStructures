#include<bits/stdc++.h>
using namespace std;
int maxi = 0;
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
    if(data==-1) return NULL;
    Node* root=new Node(data);
    root->left=createNode();
    root->right=createNode();
    return root;
}
int findDepth(Node* root){
    if(root==NULL) return 0;
    int lh = findDepth(root->left);
    int rh = findDepth(root->right);
    maxi = max(maxi,lh+rh);
    return 1+max(lh,rh);
}
int main(){
    Node* root=createNode();
    int dummy = findDepth(root);
    cout<<maxi;
}