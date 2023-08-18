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
    set<int>s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    vector<int>ans;
    while(!s.empty()){
        int start = *s.begin();
        for(int i=start;i<=n;i*=2){
            if(s.find(i) != s.end()){
                ans.push_back(i);
                s.erase(s.find(i));
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
return 0;
}