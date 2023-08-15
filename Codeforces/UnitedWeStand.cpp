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
    long long arr[n];
    long long ans1 = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans1 = max(arr[i],ans1);
    }
    vector<long long>a;
    vector<long long>b;
    for(int i=0;i<n;i++){
        if(arr[i] == ans1){
            b.push_back(arr[i]);
        }
        else{
            a.push_back(arr[i]);
        }
    }

    if(a.size() == 0 || b.size() == 0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<a.size()<<" "<<b.size()<<endl;

        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

}
return 0;
}