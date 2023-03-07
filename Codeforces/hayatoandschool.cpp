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
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    if(odd.size()==0){
        cout<<"NO"<<endl;
    }else if(odd.size()>=3){
        cout<<"YES"<<endl;
        cout<<odd[0]+1<<" "<<odd[1]+1<<" "<<odd[2]+1<<endl;
    }else if(odd.size()==2){
        if(even.size()==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<odd[0]+1<<" "<<even[0]+1<<" "<<even[1]+1<<endl;
        }
    }else if(odd.size()==1){
        cout<<"YES"<<endl;
        cout<<odd[0]+1<<" "<<even[0]+1<<" "<<even[1]+1<<endl;
    }
}
return 0;
}