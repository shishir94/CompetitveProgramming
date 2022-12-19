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
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i<n;i++){
        if(a[i] == '0'){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    for(int i = 0;i<cnt1;i++){
        cout<<"0";
    }
    for(int i = 0;i<cnt2;i++){
        cout<<"1";
    }
    cout<<endl;
}
return 0;
}