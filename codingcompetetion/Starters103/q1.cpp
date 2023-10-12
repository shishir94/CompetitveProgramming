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
    int arr[6];
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    int arr1[3];
    for(int i=0;i<3;i++){
        arr1[i] = arr[i];
    }
    vector<int>p;
    for(int i=3;i<6;i++){
        p.push_back(arr[i]);
    }
    sort(arr1,arr1+3);
    sort(p.begin(),p.end());

    int ans = 0;
    int ans1 =0;
    int po = 2;
    ans = 100*arr1[2]+10*arr1[1]+arr1[0];
    ans1 = 100*p[2]+10*p[1]+p[0];

    if(ans > ans1){
        cout<<"Alice"<<endl;
    }
    else if(ans < ans1){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }

}
return 0;
}