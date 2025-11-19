#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=arr[0];
    int sl=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]<l&&arr[i]>sl){
            sl=arr[i];
        }
    }
    cout<<sl;
}

/*
    Find the second largest element
    Input 1: [1, 5, 3, 2] → Output: 3
    Input 2: [10, 10, 9] → Output: 9


    [5 2 4 3 9]
    i=1 : l=5,s=-1 else if -> yes l=5,s=2
    i=2 : l=5,s=2 else if -> yes l=5,s=4
    i=3 : l=5,s=4 nothing
    i=4 : l=5,s=4 if -> yes l=9,s=5
*/
