#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string n;
    cin>>n;
    int sum=0;
    int sum1 = 0;
    for(int i=0;i<3;i++){
        sum += (n[i]-'0');
    }
    for(int i=3;i<6;i++){
        sum1 += n[i]-'0';
    }
    if(sum == sum1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}