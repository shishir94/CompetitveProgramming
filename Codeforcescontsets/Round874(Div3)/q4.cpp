#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    if(n==1){
        ans.push_back(1);
    }else{
        int x =-1;
        int y=-1;
        for(int i=0;i<n;i++){
            if(arr[i] == n){
                x=i;
            }
            if(arr[i] == n-1){
                y=i;
            }
        }
        if(x != 0 && x != n-1){
            for(int i=x;i<n;i++){
                ans.push_back(arr[i]);
            }
            ans.push_back(arr[x-1]);
            x =x-2;
            while(arr[x] > arr[0]){
                ans.push_back(arr[x]);
                x--;
            }
            for(int i=0;i<=x;i++){
                ans.push_back(arr[i]);
            }
            
        }else if(x== n-1){
            while(arr[x] > arr[0]){
                ans.push_back(arr[x]);
                x--;
            }
            for(int i=0;i<=x;i++){
                ans.push_back(arr[i]);
            }
        }else{
            if(y == n-1){
                ans.push_back(arr[y]);
                for(int i=0;i<n-1;i++){
                    ans.push_back(arr[i]);
                }
            }else{
                for(int i=y;i<n;i++){
                    ans.push_back(arr[i]);
                }
                ans.push_back(arr[y-1]);
                for(int i=0;i<y-1;i++){
                    ans.push_back(arr[i]);
                }
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}