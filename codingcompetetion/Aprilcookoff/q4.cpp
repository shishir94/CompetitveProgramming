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
    sort(arr,arr+n);
    int i = 0;
    int cnt = 0;
    //int cnt1 = 0;
    while(i<n){
        int p = 1;
        if(arr[i]== arr[i+1]){
            p++;
            i++;
        }
        if(p % 2 != 0){
            cnt++;
        }    
        i++;
    }
    //cout<<cnt<<" "<<cnt1<<endl;
    int x = n + cnt;
    if(x % 4 == 0){
        cout<<cnt<<endl;
    }else{
        cout<<cnt+2<<endl;
    }
}
return 0;
}