#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
long long res = 1;
while(y>0){
if(y%2==1){
res = (res*x)%p;
}
y = y>>1;
x = (x*x)%p;
}
return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>inp(n);
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    vector<int>ans(inp[0],0);
    if(inp[0] > n){
        cout<<"NO"<<endl;
    }
    else{
        vector<int>v = inp;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            int val = i+1;
            int lower = lower_bound(v.begin(),v.end(),val)-v.begin();
            ans[i] = n-lower;
        }
        bool b = true;
        for(int i=0;i<ans.size();i++){
            if(ans[i] != inp[i]){
                b = false;
                break;
            }
        }
        if(b == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }   

}
return 0;
}   