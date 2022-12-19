#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int ans =  INT_MIN;
    int d = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(ans < arr[i]){
            ans = arr[i];
        }
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]%x == 0){
            sum = sum+arr[i]/x;
        }
        if(arr[i] % x != 0){
            sum = sum + arr[i]/x+1;
        }
    }
    cout<<min(sum,ans)<<endl;
}
return 0;
}