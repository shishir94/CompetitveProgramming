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
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    int i = 1;
    int cnt1 = 0;
    while(i <= sum){
        sum = sum - i;
        i++;
        if(sum >= 0){
            cnt1++;
        }
    }
    cout<<cnt1<<endl;
}
return 0;
}