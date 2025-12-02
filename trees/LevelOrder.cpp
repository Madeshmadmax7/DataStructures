#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node *createNode(){
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);
    root->left = createNode();
    root->right = createNode();
    return root;
}
void levelorder(Node *root){
    queue<Node *> que;
    que.push(root);
    while (!que.empty()){
        int size = que.size();
        for (int i = 0; i < size; i++){
            Node* front = que.front();
            cout<<front->data<<" ";
            que.pop();
            if (front->left != NULL) que.push(front->left);
            if (front->right != NULL) que.push(front->right);
        }
        cout<<endl;
    }
}
int main(){
    Node *root = createNode();
    levelorder(root);
}