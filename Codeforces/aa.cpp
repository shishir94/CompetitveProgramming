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
    string s;
    cin>>s;
    int ans = s[0]-'A';
    // cout<<ans<<endl;
    for(int i=0;i<s.size()-1;i++){
        int x = abs((s[i+1]-'A')-(s[i]-'A'));
        int y = (25-(s[i]-'A')+1)+((s[i+1]-'A'));
        int z = ((s[i]-'A')+1)+(25-(s[i+1]-'A'));
        // cout<<x<<" "<<y<<endl;
        ans += min(x,min(z,y));
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    // int n;
    // cin>>n;
    // vector<string>v;
    // for(int i=0;i<n;i++){
    //     string p;
    //     cin>>p;
    //     v.push_back(p);
    // }
    // vector<pair<string,pair<string,int>>>v;
    // for(int i=0;i<n;i++){
    //     int j=0;
    //     string p =
    //     while(j <v[i].size()){
    //         if(v[i][j] != ' '){

    //         }
    //     }
    // }
}
return 0;
}