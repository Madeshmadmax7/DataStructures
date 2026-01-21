#include<bits/stdc++.h>
using namespace std;
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
void dfs(vector<vector<int>>grid,vector<vector<int>>&vis,int r,int c,int rz,int cz,vector<pair<int,int>>&vec){
    int n=grid.size();
    int m=grid[0].size();
    vis[r][c]=1;
    vec.push_back({r-rz,c-cz});
    for(int i=0;i<4;i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(nr>=0&&nr<n&&nc>=0&&nc<m&& grid[nr][nc]==1&&!vis[nr][nc]){
            dfs(grid,vis,nr,nc,rz,cz,vec);
        }
    }
}
int countDistIs(vector<vector<int>>grid,int n,int m){
    vector<vector<int>>vis(n,vector<int>(m));
    set<vector<pair<int,int>>>set;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&&grid[i][j]==1){
                vector<pair<int,int>>vec;
                dfs(grid,vis,i,j,i,j,vec);
                set.insert(vec);
            }
        }
    }
    return set.size();
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    cout<<countDistIs(grid,n,m);
}