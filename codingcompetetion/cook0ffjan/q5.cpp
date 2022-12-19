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
    arr[0] = 1;
    for(int i = 1;i<n;i++){
        for(int j = arr[i-1]+1;j<=100000;j++){
            bool t = true;
            long long sum = j;
            for(int k = i-1;k >= 0;k--){
                sum = sum + arr[k];
                if(sum % (i-k+1) == 0){
                    t = false;
                }
            }
            if(t == true){
                arr[i] = j;
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}