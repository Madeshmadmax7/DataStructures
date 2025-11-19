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
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int x=0;x<i+1;x++){
        cout<<arr[x]<<" ";
    }
}

/*
    Remove duplicates from sorted array

    Input 1: [1, 1, 2, 2, 3] → Output: [1, 2, 3]
    Input 2: [4, 4, 4] → Output: [4]

*/