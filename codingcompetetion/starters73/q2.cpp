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
    int arr[n];
    int f=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        f=f^arr[i];
    }
    if(f==0){
        cout<<"YES"<<endl;
    }else{
        if((n-1)%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

}
return 0;
}