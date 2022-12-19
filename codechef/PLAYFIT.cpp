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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    if(n == 1){
        cout<<"UNFIT"<<endl;
    }else{
    int min1 = arr[0];
    int ans1 = arr[1] - min1;
    for(int i = 2;i<n;i++){
        min1 = min(min1 ,arr[i-1] );
        int ans = arr[i] - min1;
        ans1 = max(ans1 , ans);
    }  
    if(ans1 <= 0){
        cout<<"UNFIT"<<endl;
    }else{
        cout<<ans1<<endl; 
    }
    }
}
return 0;
}