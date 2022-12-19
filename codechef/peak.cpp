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
    vector<int>max;
    int ans = INT_MIN;
    for(int i = 0;i<n-2;i++){
        if(ans <= arr[i]){
            ans = arr[i];
            max.push_back(ans);
        }else{
           max.push_back(ans);
        }
    }
    vector<int>min;
    int ans1 = arr[n-1];
    for(int i = n-1;i>1;i--){
        if(ans1 >= arr[i]){
            ans1 = arr[i];
            min.push_back(ans1);
        }else{
            min.push_back(ans1);
        }
    }
    int cnt = 0;
    bool t = false;
    for(int i = 1;i<n-1;i++){
        if(arr[i] > max[i-1] && arr[i] < min[n-2-i]){
            cnt++;
            if(cnt > 0){
                t = true;
                break;
            }else{
                t = false;
            }
        }
    }
    if(t){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}