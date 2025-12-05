#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &vis,vector<vector<int>> &grid,int row,int col){
    vis[row][col]=1;
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<int,int>> que;
    que.push({row,col});
    while(!que.empty()){
        int r = que.front().first;
        int c = que.front().second;
        que.pop();
        for(int dr = -1;dr<=1;dr++){
            for(int dc = -1;dc<=1;dc++){
                int nr = dr+r;
                int nc = dc+c;
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&!vis[nr][nc]){
                    vis[nr][nc]=1;
                    que.push({nr,nc});
                }
            }
        }
    }
}
int noOfIslands(vector<vector<int>> grid,int n,int m){
    vector<vector<int>> vis(n,vector<int>(m,0));
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&& grid[i][j]==1){
                bfs(vis,grid,i,j);
                c++;
            }
        }
    }
    return c;
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
    int res = noOfIslands(grid,n,m);
    cout<<res;
}