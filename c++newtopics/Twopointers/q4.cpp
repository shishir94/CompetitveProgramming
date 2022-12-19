/*

Given an unsoretd array representing the heights of bars find the maximum area or volume of water which can be 
stored between them.

Brute force:: Using 2 loops . Time compexity - o(n^2)

2nd solution::
The maximum area for any height h[i] comes with the farthest height h[j] such that h[j] >= h[i]


*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = n-1;
    int ans = 0;
    while(i < j){
        ans = max(ans , min(arr[i],arr[j])*(j-i));
        if(arr[i] > arr[j]){
            j--;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}