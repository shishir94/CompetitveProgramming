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
    long long v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    for(int i =0;i<n-1;i++){
        int val = v[i]-v[i+1];
        if(val !=0){
            if(ans.size()>0){
                if(val>0 && ans[ans.size()-1]<0){
                    ans.push_back(val);
                }else if(val < 0 && ans[ans.size()-1]>0){
                    ans.push_back(val);
                }
            }else{
                ans.push_back(val);
            }
        }
    }
    cout<<1+ans.size()<<endl;
          
}
return 0;
}