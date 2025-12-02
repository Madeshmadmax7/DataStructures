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
    if(data==-1) return NULL;
    Node* root=new Node(data);
    root->left=createNode();
    root->right=createNode();
    return root;
}
void maxDepth(Node* root){
    queue<Node*> que;
    que.push(root);
    int c=0;
    while(!que.empty()){
        int size=que.size();
        c++;
        while(size--){
            Node* front=que.front();
            que.pop();
            if(front->left!=NULL){
                que.push(front->left);
            }
            if(front->right!=NULL){
                que.push(front->right);
            }
        }
    }
    cout<<c;
}
int main(){
    Node* root=createNode();
    maxDepth(root);
}