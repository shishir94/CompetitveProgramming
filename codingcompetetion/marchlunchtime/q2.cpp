#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    int cnt = 0;
    int cnt1 = 0;
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            cnt++;
        }else{
            cnt1++;
        }
    }
    if(cnt1 <= 1){
            cout<<"-1"<<endl;
        
    }else{
    if(cnt == 0){
        if(cnt1 % 2 == 0){
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }else{
        if(cnt1 %2 == 0){
            for(int i = 0;i<n;i++){
                if(arr[i] % 2 != 0){
                    cout<<arr[i]<<" ";
                }
            }
            for(int i = 0;i<n;i++){
                if(arr[i] % 2 == 0){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }else{
            int x = 0;
            long long a;
            for(int i = 0;i<n;i++){
                if(arr[i] % 2 != 0){
                    a = arr[i];
                    if(x < cnt1-1){
                    cout<<arr[i]<<" ";
                    }
                    x++;
                }
            }
            for(int i = 0;i<n;i++){
                if(arr[i] % 2== 0){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<a<<endl;
        }
    }
    }
}
return 0;
}