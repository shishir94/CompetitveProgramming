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
    string c;
    cin>>c;
    int i = 0;
    int ans = 0;
    while(i < n){
        int p = 1;
        while(c[i] == c[i+1]){
            p++;
            i++;
        }
        i++;
        if(p % 2 == 0){
            ans = ans + p/2;
        }else{
            ans = ans + p/2+1;
        }
    }
    cout<<ans<<endl;
}
return 0;
}
