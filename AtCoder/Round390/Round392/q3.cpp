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
int n;
cin>>n;
vector<int>p(n);
for(int i=0;i<n;i++) cin>>p[i];
vector<int>q(n);
for(int i=0;i<n;i++){
    cin>>q[i];
}
map<int,int>pq;
map<int,int>qp;
for(int i=0;i<n;i++){
    pq[p[i]] = i+1;
    qp[q[i]] = i+1;
}

for(int i=1;i<=n;i++){
    int p1 = qp[i];
    int st = p[p1-1];
    cout<<q[st-1]<<" ";
}
// cout<<;
cout<<endl;
return 0;
}