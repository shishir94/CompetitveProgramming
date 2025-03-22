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
int n,m;
cin>>n>>m;
vector<int>a(m);
map<int,int>mp;
for(int i=0;i<m;i++) {
    cin>>a[i];
    mp[a[i]]++;
}
int cnt = 0;
vector<int>ans;
for(int i=1;i<=n;i++){
    if(mp.find(i) == mp.end()) {
        cnt++;
        ans.push_back(i);
    }
}
cout<<cnt<<endl;
for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
cout<<endl;
return 0;
}