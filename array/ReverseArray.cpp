#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
    Reverse an array
    Input 1: [1, 2, 3] → Output: [3, 2, 1]
    Input 2: [5, 4, 2] → Output: [2, 4, 5]
*/