#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isSorted = true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
}

/*
    Check if array is sorted
    Input 1: [1, 2, 3, 4] → Output: true
    Input 2: [1, 3, 2] → Output: false
*/