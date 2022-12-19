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
    vector<int>v;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;
    sort(v.begin(),v.end());
    set<vector<int>>ans;
    int sum = 0;
    for(int i = 0;i<n-3;i++){
        /*
        if(i>0&&v[i]==v[i-1]){
            continue;
        }
        */
        for(int j = i+1;j<n-2;j++){
            /*
            if(i>0&&v[i]==v[i-1]){
                continue;
            }
            */
            for(int k = j+1;k<n-1;k++){
                /*
                if(k>0&&v[k]==v[k-1]){
                    continue;
                }
                */
                for(int l = k+1;l<n;l++){
                    /*
                    if(l>0&&v[l]==v[l-1]){
                        continue;
                    }*/
                    sum = v[i]+v[j]+v[k]+v[l];
                    if(sum > target){
                        break;
                    }else{
                        vector<int>t;
                        t.push_back(v[i]);
                        t.push_back(v[j]);
                        t.push_back(v[k]);
                        t.push_back(v[l]);
                        ans.insert(t);
                    }
                }
            }
        }

    }
    vector<vector<int>>res;
    for(auto it:ans){
        res.push_back(it);
    }
}
return 0;
}