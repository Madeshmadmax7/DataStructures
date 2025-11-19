#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int c = 1;
        while(arr[i]==arr[i+1]&&i+1<n){
            c++;
            i++;
        }
        cout<<c<<" ";
    }
}