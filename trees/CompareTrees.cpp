#include<bits/stdc++.h>
using namespace std;
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
bool compareTrees(Node*root1,Node*root2)
{
    if(root1==NULL&&root2==NULL) return (root1==root2);
    return (root1->data == root2->data) && compareTrees(root1->left,root2->left) && compareTrees(root1->right,root2->right);
}
int main(){
    Node* root1=createNode();
    Node* root2=createNode();
    bool res = compareTrees(root1,root2);
    cout<<res;
}