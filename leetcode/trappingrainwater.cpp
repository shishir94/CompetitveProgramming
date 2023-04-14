/*
Water store tabhi hoga sab uske pichhe uske block se bada koi block ho or ussse age koi block usse bada ho.
To hum pre-compute kar lenge ki usse bada block uss block se phele kitne ka h or uske baad usse bada block konsa h
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
    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int left[n];
    int right[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum = max(sum,height[i]);
        left[i]=sum;
    }
    int sum1=0;
    for(int i=n-1;i>=0;i--){
        sum1 = max(sum1,height[i]);
        right[i]=sum1;
    }
    int ans =0;
    for(int i=0;i<n;i++){
        ans += min(left[i],right[i])-height[i];
    }
    cout<<ans<<endl;
}
return 0;
}