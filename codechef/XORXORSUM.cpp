#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>vec1;
    vector<long long>vec2;
    for(int i = 0;i<n-1;i++){
        for(int j = 0+i+1;j<n;j++){
            vec1.push_back(arr[i]^arr[j]);
        }
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0+i+1;j<n;j++){
            vec2.push_back(arr[i]+arr[j]);
        }
    }
    long long cnt = 0;
    for(int i = 0;i<vec1.size();i++){
        if(2*(vec1[i]) == vec2[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;

return 0;
}