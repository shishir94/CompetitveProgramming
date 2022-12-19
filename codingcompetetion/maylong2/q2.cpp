#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int cnt2 = 0;
    for(int i = 0;i<n/2;i++){
        if(a[i] != a[n-1-i]){
            cnt2++;
        }
    }
    long long d = cnt2/2;
    long long e = cnt2%2;
    cout<<d+e<<endl;
}
return 0;
}