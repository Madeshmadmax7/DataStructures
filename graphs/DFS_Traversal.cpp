#include<bits/stdc++.h>
using namespace std;
void dfs(int n,vector<vector<int>>adjList,vector<int> vis){
    cout<<n<<" ";
    vis[n]=1;
    for(auto it:adjList[n]){
        if(!vis[it]){
            dfs(it,adjList,vis);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjList(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector<int>vis(n,0);
    dfs(0,adjList,vis);
}