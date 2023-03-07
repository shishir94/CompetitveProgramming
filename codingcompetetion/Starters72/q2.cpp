#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k,s;
    cin>>n>>k>>s;
    vector<int>ans;
    if(k==1){
        if(n>=s){
            for(int i=0;i<s;i++){
                cout<<"1"<<" ";
            }
            for(int i=s;i<n;i++){
                cout<<"0 ";
            }
            cout<<endl;
        }else{
            cout<<"-2"<<endl;
        }
    }else{
        bool f = false;
        vector<int>ans;
        long long o=s;
        for(int i=0;i<n;i++){
            int curr = s%k;
            if(curr!=0&&curr!=1&&curr!=k-1){
                f=true;
                break;
            }
            if(curr == k-1 && k!=2){
                curr=-1;
            }
            ans.push_back(curr);
            s=(s-curr)/k;
        }
        if(f==true){
            cout<<"-2"<<endl;
        }else{
            long long check = 0;
            for(int i=0;i<ans.size();i++){
                check = check + ans[i]*pow(k,i);
            }
            if(check==o){
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }else{
                cout<<"-2"<<endl;
            }
        }
    }
}
return 0;
}