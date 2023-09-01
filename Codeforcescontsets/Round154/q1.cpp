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

bool valid(int n){
    for(int i=2;i*i<=n;i++){
        if(n% i == 0){
            return false;
        }
    }
    return true;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string p = to_string(n);
    bool p1 = false;
    int ans = 0;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            int d = (p[i]-'0')*10+(p[j]-'0');
            if(valid(d)){
                ans =d;
                p1=true;
                break;
            }
        }
    }
    if(p1 == true){
        cout<<ans<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
return 0;
}