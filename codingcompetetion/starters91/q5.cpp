#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long l,r;
    cin>>l>>r;
    long long cnt =0;
    set<long long>s;
    if(l==0){
        int k=0;
        while((1LL<<k) <=r){
            k++;
        }
        cout<<(1LL<<k)<<endl;
    }else{
        set<int>s;
        for(int i=l;i<=r;i++){
            for(int j=i+1;j<=r;j++){
                int f = (i^j);
                if(f == i+j){
                    s.insert(f);
                }
            }
        }
        cout<<(long long)(s.size())<<endl;
    }
}
return 0;
}