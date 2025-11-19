#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    int ind=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            ind=i;
            break;
        }
    }
    cout<<ind;
}