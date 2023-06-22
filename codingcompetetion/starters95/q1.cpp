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
    int n ;
    cin>>n;
    string arr[n];
    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int ans1 =0;
    int ans2 =0;
    int ans3 =0;
    int ans4 =0;
    int ans5 = 0;
    if(mp.find("A") != mp.end()){
        ans1 = mp["A"]+mp["AB"];
    }
    if(mp.find("B") != mp.end()){
        ans2 = mp["B"]+mp["AB"];
    }
    if(mp.find("AB") != mp.end()){
        ans3 = mp["AB"];
    }
    if(mp.find("O") != mp.end()){
        ans4 = mp["A"]+mp["AB"]+mp["O"];
        ans5 = mp["B"]+mp["AB"]+mp["O"];
    }
    int ans = max(ans1,max(ans2,max(ans3,max(ans4,ans5))));
    cout<<ans<<endl;

}
return 0;
}