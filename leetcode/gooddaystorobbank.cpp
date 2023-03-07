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
    int time;
    cin>>time;
    // Brute Force Solution ::

    vector<int>v;
    // for(int i=0;i<n;i++){
    //     int left=0;
    //     int right =0;
    //     int pre = arr[i];
    //     for(int j=i-1;j>=0;j--){
    //         int curr = arr[j];
    //         if(curr>=pre){
    //             left++;
    //             pre=curr;
    //         }else{
    //             break;
    //         }
    //     }
    //     pre=arr[i];
    //     for(int j=i+1;j<n;j++){
    //         int curr=arr[j];
    //         if(pre<=curr){
    //             right++;
    //             pre=curr;
    //         }else{
    //             break;
    //         }
    //     }
    //     if(left>=time&&right>=time){
    //         v.push_back(i);
    //     }
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // 2nd Solution ::
    int left[n];
    int right[n];
    left[0]=0;
    right[n-1]=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>=arr[i]){
            left[i]=left[i-1]+1;
        }else{
            left[i]=0;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i+1]>=arr[i]){
            right[i]=right[i+1]+1;
        }else{
            right[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(left[i]>=time&&right[i]>=time){
            v.push_back(i);
        }
    }
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}