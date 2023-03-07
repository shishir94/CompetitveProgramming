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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=1;
    int b =1;
    int ans =0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(a,b);
        }
        a=max(a*arr[i],arr[i]);
        b=min(b*arr[i],arr[i]);
        ans = max(a,ans);
    }
    cout<<ans<<endl;
}
return 0;
}   