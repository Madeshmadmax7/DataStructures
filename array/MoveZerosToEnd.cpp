#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]==0&&arr[j]!=0){
            swap(arr[i],arr[j]);
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}