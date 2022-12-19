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
    int cnt1 = 0;
    int cnt2 = 0;
for(int i = 0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i = 0;i<n;i++){
    if(arr[i] % 2 == 0){
            cnt1++;
        }else{
            cnt2++;
        }
    }    
    //cout<<cnt1<<" "<<cnt2<<endl;
    if(cnt1 == 0 || cnt2 == 0){
        cout<<"0"<<endl;
    }else if(cnt1 % 2 == 0){
        if(cnt2 % 2 != 0){
        cout<<cnt1<<endl;
        }else{
            cout<<min(cnt2/2,cnt1)<<endl;
        }
    }else{
        if(cnt2 % 2 == 0){
            cout<<min(cnt2/2,cnt1)<<endl;
        }else{
            cout<<cnt1<<endl;
        }
    }
}
return 0;
}