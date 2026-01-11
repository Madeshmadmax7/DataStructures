#include<bits/stdc++.h>
using namespace std;
bool isCycle(int vis[],vector<int>adj[],int st){
    vis[st]=1;
    queue<pair<int,int>> que;
    que.push({st,-1});
    while(!que.empty()){
        int node=que.front().first;
        int par=que.front().second;
        que.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                que.push({it,node});
            }
            else{
                if(par!=it){
                    return true;
                }
            }
        }
    }
    return false;
}
bool cycles(vector<int>adj[],int n){
    int vis[n]={0};
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(isCycle(vis,adj,i)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<int>adj[n];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<cycles(adj,n);
}