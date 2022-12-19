#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    long long arr[n][m];
    long long arr1[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    if(n == 1){
        bool p = true;
        for(int i = 0;i<m;i++){
            if(arr[0][i] != arr1[0][i]){
                p = false;
                break;
            }
        }
       // cout<<p<<endl;
        if(p){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(m == 1){
        bool p = true;
        for(int i = 0;i<n;i++){
            if(arr[i][0] != arr1[i][0]){
                p = false;
                break;
            }
        }
        if(p){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        vector<long long>v;
        vector<long long>v1;
        vector<long long>v2;
        vector<long long>v3;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if((i+j)%2==0){
                    v.push_back(arr[i][j]);
                }else{
                    v1.push_back(arr[i][j]);
                }
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if((i+j)%2==0){
                    v2.push_back(arr1[i][j]);
                }else{
                    v3.push_back(arr1[i][j]);
                }
            }
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        bool x = false;
        bool h = false;
        for(int i = 0;i<v.size();i++){
            if(v[i] != v2[i]){
                x = false;
                break;
            }else{
                x = true;
            }
        }
            for(int i = 0;i<v1.size();i++){
            if(v1[i] != v3[i]){
                    h= false;
                break;
            }else{
                h = true;
            }
        }
        if(x == true && h == true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}