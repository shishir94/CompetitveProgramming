#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n==2){
        return true;
    }
    if(n==1){
        return false;
    }
    bool p = true;
    for(int i=2;i<n;i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;    
}


int diagonalPrime(vector<vector<int>>& nums) {
    int n = nums.size();
    int ans =0;
    int m = nums[0].size();
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(isprime(nums[i][j])== true){
            ans = max(ans,nums[i][j]);
        }
        i++;
        j++;
    }
    cout<<ans<<endl;
    int a=n-1;
    int b = m-1;
    while(a>=0 && b>=0){
        if(isprime(nums[a][b])== true){
            ans = max(ans,nums[a][b]);
        }
        a--;
        b--;
    }
    return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>>nums;
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v.push_back(x);

        }
        nums.push_back(v);
        v.clear();
    }
    cout<<diagonalPrime(nums)<<endl;
}
return 0;
}
    