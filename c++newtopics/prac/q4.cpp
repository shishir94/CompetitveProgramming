/*
LONGEST OCCURANCES
input: string
eg., aabbbbbbccddaaaaa
output: 6
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    int n = x.size();
    int i = 0;
    int ans =   INT_MIN;
    while(i < n){
        int p = 1;
        while(i+1<n && x[i] == x[i+1]){
            p++;
            i++;
        }
        ans = max(ans,p);
        i++;
    }
    cout<<ans<<endl;
}
return 0;
}