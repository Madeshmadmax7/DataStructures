#include<bits/stdc++.h>
using namespace std;
int maxi=0;
struct Node{
    int data;
    Node*left=NULL,*right=NULL;
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
int maxPathSum(Node* root,int &maxi){
    if(root==NULL) return 0;
    int lh = max(0,maxPathSum(root->left,maxi));
    int rh = max(0,maxPathSum(root->right,maxi));
    maxi = max(maxi,root->data+lh+rh);
    return root->data+max(lh,rh);
}
int main(){
    Node* root=createNode();
    int res = maxPathSum(root,maxi);
    cout<<maxi;
}