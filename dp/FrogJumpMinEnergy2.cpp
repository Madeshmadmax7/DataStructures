#include<bits/stdc++.h>
using namespace std;
int minJump(vector<int>&arr,int n){
    vector<int>dp(n,0);
    for(int i=1;i<n;i++){
        int left=dp[i-1]+abs(arr[i]-arr[i-1]);
        int right=INT_MAX;
        if(i>1){
            right=dp[i-2]+abs(arr[i]-arr[i-2]);
        }
        dp[i]=min(left,right);
    }
    return dp[n-1];
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minJump(arr,n);
}