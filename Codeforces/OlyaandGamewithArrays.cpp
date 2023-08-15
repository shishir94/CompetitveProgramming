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
    vector<int>first;
    vector<int>second;
    while(n--){
        int m;
        cin>>m;
        vector<int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        first.push_back(v[0]);
        second.push_back(v[1]);
    }
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    long long ans = 0;
    for(int i=0;i<second.size();i++){
        ans += second[i];
    }
    ans += (first[0]-second[0]);
    cout<<ans<<endl;
}
return 0;
}