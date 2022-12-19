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
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int ans = INT_MIN;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += A[i];
        if(ans < sum){
            ans = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<ans<<endl;
}
return 0;
}