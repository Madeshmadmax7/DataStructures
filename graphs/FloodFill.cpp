#include<bits/stdc++.h>
using namespace std;
int dRow[]={-1,0,1,0};
int dCol[]={0,1,0,-1};
void dfs(vector<vector<int>>&copy,vector<vector<int>>arr,int row,int col,int newColour,int initialColour){
    copy[row][col]=newColour;
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<4;i++){
        int nr = dRow[i]+row;
        int nc = dCol[i]+col;
        if(nr>=0&&nr<n&&nc>=0&&nc<m&&arr[nr][nc]==initialColour&&copy[nr][nc]!=newColour){
            dfs(copy,arr,nr,nc,newColour,initialColour);
        }
    }
}
vector<vector<int>> floodFill(vector<vector<int>>arr,int sr,int sc,int newColour){
    int initialColour=arr[sr][sc];
    vector<vector<int>>copy=arr;
    dfs(copy,arr,sr,sc,newColour,initialColour);
    return copy;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sr,sc;
    cin>>sr>>sc;
    int newColour;
    cin>>newColour;
    vector<vector<int>>res = floodFill(arr,sr,sc,newColour);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
}