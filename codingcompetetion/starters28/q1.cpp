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
    int a;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        cin>>a;
        if(a >= 10 && a <= 60){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}