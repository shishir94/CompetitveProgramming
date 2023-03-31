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
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<even.size();i++){
        sum1+=even[i];
    }
    for(int i=0;i<odd.size();i++){
        sum2+=odd[i];
    }
    // cout<<sum1<<" "<<sum2<<endl;
    if(sum2>=sum1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}