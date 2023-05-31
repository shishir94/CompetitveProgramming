#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
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
    vector<bool>v(n+1,0);
    v[1]=1;
    int sum =1;
    int cnt=0;
    vector<pair<int,int>>l;
    int e =n-1;
    while(e--){
        int r,d;
        cin>>r>>d;
        l.push_back(make_pair(r,d));

    }
    while(sum != n){
        // cout<<1<<endl;
        for(int i=0;i<l.size();i++){
            if((v[l[i].first]== 1 && v[l[i].second]== 0)||(v[l[i].first]== 0 && v[l[i].second]== 1)){
                if(v[l[i].first]== 0){
                    sum++;
                    v[l[i].first]= 1;
                }else if(v[l[i].second]== 0){
                    sum++;
                    v[l[i].second]= 1;
                }
            }else{
                continue;
            }
        }
        // cout<<sum<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
}
return 0;
}