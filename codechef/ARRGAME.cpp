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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    int ans = INT_MIN;
    int ans1 = INT_MIN;
    int cnt = 0;
    while(i <n){
        if(arr[i] == 0){
            int p = 0;
            while(i<n && arr[i]==0){
                p++;
                i++;
            }
            cnt++;
            if(p >= ans){
                ans1 = ans;
                ans = p;
            }else if(p >= ans1){
                ans1 = p;
            }
        }else{
            i++;
        }
    }
    if(cnt == 0){
        cout<<"No"<<endl;
    }else if(cnt == 1){
        if(ans % 2 == 0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }else{
        if(ans % 2 != 0 && ((ans+1)/2 > ans1)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
return 0;
}