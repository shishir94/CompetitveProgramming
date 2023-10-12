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
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    vector<vector<int>>v;
    string s1 = " ";
    s1 += s;
    for(int i=1;i<=k;i++){
        int cnt1 =0;
        int cnt0 =0;
        for(int j=i;j<=n;j+=k){
            if(s1[j] == '0'){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        v.push_back({cnt0,cnt1});
    }

    int ans0 = 0;
    int ans1 = 0;
     
    // convert all 1 to 0;
    for(int i=0;i<v.size();i++){
        int cnt1 = v[i][1];
        if(cnt1%2 == 0){
            ans0 += (cnt1/2);
        }
        else{
            ans0 += ((cnt1/2)+2);
        }
    }

    // convert all 0 to 1;

    for(int i=0;i<v.size();i++){
        int cnt0 = v[i][1];
        if(cnt0 == 0){
            ans1 = INT_MAX;
            break;
        }
        else{
            ans1 += (v[i][0]);
        }
    }

    cout<<min(ans0,ans1)<<endl;

}
return 0;
}