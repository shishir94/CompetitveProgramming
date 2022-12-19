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
    if(n == 2){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int arr[n];
        if(n % 2 != 0){
            for(int i = 0;i< (n/2)+1;i++){
                arr[i] = 2*i+1;
            }
            int p = 2;
            for(int i =n-1;i>=(n/2)+1;i--){
                arr[i] = p;
                p = p+2;
            }
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else{
            int p = 1;
            arr[n/2-1] = n;
            for(int i = n/2;i<n;i++){
                arr[i] = p;
                p = p +1;
            }
            int x = n/2+1;
            for(int i = n/2-2;i>=0;i--){
                arr[i] = x;
                x = x+1;
            }
            for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}
return 0;
}