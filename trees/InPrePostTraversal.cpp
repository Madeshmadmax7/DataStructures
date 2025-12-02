#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;
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
void printVec(const vector<int>& v) {
    cout << "[";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i != v.size() - 1) cout << ", ";
    }
    cout << "]\n";
}
void create(Node* root){
    vector<int> pre,in,post;
    stack<pair<Node*,int>> stk;
    stk.push({root,1});
    while(!stk.empty()){
        auto it=stk.top();
        stk.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            stk.push(it);
            if(it.first->left!=NULL){
                stk.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            stk.push(it);
            if(it.first->right!=NULL){
                stk.push({it.first->right,1});
            }
        }
        else if(it.second==3){
            post.push_back(it.first->data);
        }
    }
    printVec(pre);
    printVec(in);
    printVec(post);
}
int main(){
    Node* root=createNode();
    create(root);
}