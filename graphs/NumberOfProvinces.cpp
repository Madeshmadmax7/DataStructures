#include<bits/stdc++.h>
using namespace std;
void provinces(vector<int> adjL[],vector<int> &vis,int n){
    vis[n]=1;
    for(auto it:adjL[n]){
        if(!vis[it]){
            provinces(adjL,vis,it);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adjL[n];
    vector<int> vis(n,0);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            c++;
            provinces(adjL,vis,i);
        }
    }
    cout<<c;
}