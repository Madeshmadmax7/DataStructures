#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    int maxv = 0;
    for(int j=0;j<n;j++){
        if(arr[j]==1){
            c++;
            maxv=max(c,maxv);
        }
        else{
            c=0;
        }
        maxv=max(c,maxv);
    }
    cout<<maxv;
}