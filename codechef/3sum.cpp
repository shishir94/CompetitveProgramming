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
    int nums[n];
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums,nums+n);
    vector<vector<int>>v;
    for(int i = 0;i<n;i++){
        int b = -nums[i];
        int x = i+1;
        int y = n-1;
        while(x<y){
            if(nums[x]+nums[y]>b){
                y--;
            }else if(nums[x]+nums[y]<b){
                x++;
            }else{
                vector<int>ans = {nums[i],nums[x],nums[y]};
                v.push_back(ans);
                while (x < y && nums[x] == nums[x+1]){
                    x++;
                }
                while (x < y && nums[y] == nums[y-1]){
                    y--;
                }
                x++;
                y--;
            }
        }
        while (i + 1 < n&& nums[i + 1] == nums[i]){
            i++;
        }
    }
}
return 0;
}