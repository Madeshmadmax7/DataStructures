#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,vector<int>&dp,int ind){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int left=func(arr,dp,ind-1)+abs(arr[ind]-arr[ind-1]);
    int right=INT_MAX;
    if(ind>1){
        right=func(arr,dp,ind-2)+abs(arr[ind]-arr[ind-2]);
    }
    return dp[ind]=min(left,right);
}
int minEnergy(vector<int>&arr,int n){
    vector<int>dp(n,-1);
    int res=func(arr,dp,n-1);
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minEnergy(arr,n);
}