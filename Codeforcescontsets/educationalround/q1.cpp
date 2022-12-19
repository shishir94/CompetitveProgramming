#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string y = to_string(n);
    int x = y.size();
    int ans = (x-1)*9;
    ans += n/pow(10,x-1);
    cout<<ans<<endl;

}
return 0;
}