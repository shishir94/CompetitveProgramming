#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int nums1[n];
    int nums2[m];
    for(int i = 0;i<n;i++){
        cin>>nums1[i];
    }
    for(int i = 0;i<m;i++){
        cin>>nums2[i];
    }
    int arr2[n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(nums1[i]==nums2[j]){
               arr2[i]=j;
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
       int g;
       bool h = true;
        for(int j=arr2[i]+1;j<m;j++){
           if(nums2[j]>nums1[i]){
               g = nums2[j];
               h = false;
               break;
           }
        }
        if(h){
            cout<<"-1 ";
        }else{
            cout<<g<<" ";
        }
       
    }
    cout<<endl;
}
return 0;
}