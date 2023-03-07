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
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            cnt++;
        }
    }
    int sum =0;
    sum += (cnt+1)/2;
    sum += (n-cnt);
    cout<<sum<<endl;

}
return 0;
}