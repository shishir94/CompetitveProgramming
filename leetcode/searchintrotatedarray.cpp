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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int i=0;
    int j=n-1;
    int l=-1;
    while(i<=j){
        // cout<<i<<" "<<j<<endl;
        int mid  =(i+j)/2;
        if(arr[mid]==target){
            l=mid;
            break;
        }else if(arr[mid]>=arr[i]){
            if(target >=arr[i]&&target<=arr[mid]){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }else{
            if(target>=arr[mid]&&target<=arr[j]){
                i=mid+1;
                
            }else{
                j=mid-1;
            }
        }
    }
    cout<<l<<endl;
}
return 0;
}