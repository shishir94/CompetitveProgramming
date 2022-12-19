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
    int arr[n+1];
    for(int i = 0;i<n+1;i++){
        cin>>arr[i];
    }
    if(n %2!=0){
        int f = 0;
        int cnt = 0;
        for(int i = 0;i<n+1;i++){
            f = f ^arr[i];
        }
        int d = 0;
        for(int i = 0;i<n+1;i++){
            if(arr[i] == f){
                d = i;
                break;
            }
        }
        if(d!=0||d!=n-1){
            for(int i = 0;i<d;i++){
                int v = f^arr[i];
                cout<<v<<" ";
            }
            for(int i = d+1;i<n+1;i++){
                int v = f^arr[i];
                cout<<v<<" ";
            }
            cout<<endl;
        }else if(d == 0){
            for(int i =1;i<n+1;i++){
                int v = f^arr[i];
                cout<<v<<" ";
            }
            cout<<endl;
        }else{
            for(int i = 0;i<n;i++){
                int v = f^arr[i];
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }else{
        int f = arr[0];
        for(int i = 1;i<n+1;i++){
            int v = f^arr[i];
            cout<<v<<" ";
        }
        cout<<endl;
    }
    
}
return 0;
}