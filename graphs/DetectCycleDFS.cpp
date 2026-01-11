#include<bits/stdc++.h>
using namespace std;
bool dfs(int vis[],vector<int>adjList[],int st,int par){
    vis[st]=1;
    for(auto it:adjList[st]){
        if(!vis[it]){
            if(dfs(vis,adjList,it,st)==true) return true;
        }
        else if(it!=par){
            return true;
        }
    }
    return false;
}
bool hasCycles(vector<int>adjList[],int n){
    int vis[n]={0};
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(dfs(vis,adjList,i,-1)) return true;
        }
    }
    return false;
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<int>adjList[n];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout<<hasCycles(adjList,n);
}