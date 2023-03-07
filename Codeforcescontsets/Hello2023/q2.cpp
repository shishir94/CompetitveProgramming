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
    if(n%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<"1 ";
            }else{
                cout<<"-1"<<" ";
            }
        }
        cout<<endl;
    }else{
        if(n==3){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            int x = n/2;
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<x-1<<" ";
                }else{
                    cout<<-x<<" ";
                }
            }
            cout<<endl;
        }
    }
}
return 0;
}