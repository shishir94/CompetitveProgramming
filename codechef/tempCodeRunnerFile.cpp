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
  //  cout<<n<<endl;
    long long s = 8*n+1;
  //  cout<<s<<endl;
    s = sqrt(s);
  //  cout<<s<<endl;
    s = s-1;
    s = s/2;
    cout<<s<<endl;
}
return 0;
}