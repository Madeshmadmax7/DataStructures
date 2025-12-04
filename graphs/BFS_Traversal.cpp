#include<bits/stdc++.h>
using namespace std;
void bfs(int n,vector<int> adjList[]){
    queue<int>que;
    vector<int>vis(n,0);
    vis[0]=1;
    que.push(0);
    while(!que.empty()){
        int front=que.front();
        que.pop();
        cout<<front<<" ";
        for(auto it: adjList[front]){
            if(!vis[it]){
                vis[it]=1;
                que.push(it);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adjList[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bfs(n,adjList);
}