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
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int cnt = 1;
    int last = 0;

    while(last<n){
        int ind = lower_bound(arr.begin(),arr.end(),arr[last]+2)-arr.begin();
        if(ind == n){
            break;
        }
        else{
            cnt++;
            last =ind;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}