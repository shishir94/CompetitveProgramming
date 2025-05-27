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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    int cnt0 = 0,cnt1 = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }

    int total_pairs = cnt0/2+cnt1/2;
    bool found = false;
    if(total_pairs <m) cout<<"NO"<<endl;
    else{
        for(int i=0;i<=m;i++){
            int zero= i, one = m-i;

            int left_0 = cnt0-2*zero;
            int left_1 = cnt1-2*one;

            if(left_0 == left_1){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}
return 0;
}