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
    int ans = INT_MIN;
    int ans1 = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(ans < arr[i]){
            ans = arr[i];
        }
        if(ans1 > arr[i]){
            ans1 = arr[i];
        }
    }
    int sum = ans+ans1;
    cout<<sum<<endl;

}
return 0;
}