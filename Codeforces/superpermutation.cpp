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
    if(n==1){
        cout<<1<<endl;
    }else{
        if(n%2!=0){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++){
                if(i%2!=0){
                    cout<<i<<" ";
                }else{
                    cout<<n-i<<" ";
                }
            }
            cout<<endl;
        }
    }
}
return 0;
}