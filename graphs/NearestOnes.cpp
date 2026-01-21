#include<bits/stdc++.h>
using namespace std;
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
vector<vector<int>> nearestOnes(vector<vector<int>>adjMat,int n,int m){
    vector<vector<int>> dist(n,vector<int>(m,0));
    int vis[n][m]={0};
    queue<pair<pair<int,int>,int>> que;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adjMat[i][j]==1){
                que.push({{i,j},0});
                vis[i][j]=1;
            }
            else{
                vis[i][j]=0;
            }
        }
    }
    while(!que.empty()){
        int row=que.front().first.first;
        int col=que.front().first.second;
        int dt=que.front().second;
        que.pop();
        dist[row][col]=dt;
        for(int i=0;i<4;i++){
            int nr=dr[i]+row;
            int nc=dc[i]+col;
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0){
                vis[nr][nc]=1;
                que.push({{nr,nc},dt+1});
            }
        }
    }
    return dist;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adjMat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adjMat[i][j];
        }
    }
    vector<vector<int>>res=nearestOnes(adjMat,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}