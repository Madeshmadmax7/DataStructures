#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lar = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    cout<<lar;
}

/*
    Find the largest element in an array
    Input 1: [1, 5, 3, 2] → Output: 5
    Input 2: [-1, -5, -3] → Output: -1
*/