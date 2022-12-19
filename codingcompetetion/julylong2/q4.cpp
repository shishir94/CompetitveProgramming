#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<long long> & v){      // this will display vector
    cout<<"Displaying this vector "<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>v;
    for(int i = 0;i<n;i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
   // display(v);
    int i =0;
    int j = 0;
    while( i < n && j < n){
        if(arr[i] == v[j]){
            arr[i] = -1;
            i++;
            j++;
        }else{
            i++;
        }
    }/*
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/
    vector<long long>p;
    for(int i = 0;i<n;i++){
        if(arr[i] != -1){
            p.push_back(arr[i]);
        }
    }
   // display(p);
    if(p.size() == 0 || p.size() == 1){
        cout<<"YES"<<endl;
    }else{
        bool t = true;
        for(int i = 0;i<p.size()-1;i++){
            if(p[i] >p[i+1] ){
                t = false;
                break;
            }
        }
        if(t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
} 
return 0;
}