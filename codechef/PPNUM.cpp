#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long fun(long long a,long long b,int i){
    long long d = 1000000007;
    long long s = ((((a+b)%d)*((b-a+1)%d))/2*i)%d;
    return s;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x ,y;
    cin>>x>>y;
    long long ans = 0;
    string s = to_string(x);
    string r = to_string(y);
    long long d = 1000000007;
    int f = s.size();
    int e = r.size();
    long long m = 0;
    if(f==e){
       m = m + fun(x,y,f);
       m = m %d;
       cout<<m<<endl;
    }else{
        m = m + fun(x,pow(10,f)-1,f)+fun(pow(10,e-1),y,e);
        m = m%d;
        if(e -f > 1){
            for(int i = f;i<e-1;i++){
                m = m + fun(pow(10,i),pow(10,i+1)-1 ,i+1);
                m = m %d;
            }
        }
        cout<<m<<endl;
    }
}
return 0;
}