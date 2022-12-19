#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x,c;
    cin>>n>>x>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(x-(arr[i]+c)>0){
            arr[i]=x;
            cnt++;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum = sum-cnt*c;
    cout<<sum<<endl;

}
return 0;
}