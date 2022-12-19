#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
   // cout<<"Case #"<<ii<<": ";
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[m];
    long long b[m];
    for(int i = 0;i<m;i++){
        cin>>a[i]>>b[i];
    }
    if(m != n){
        cout<<n-1<<endl;
    }else{
        cout<<n<<endl;
    }
}
return 0;
}