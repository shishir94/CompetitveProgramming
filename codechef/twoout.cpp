#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> & v){      // this will display vector
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
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr3[i];
    }
    vector<int>v;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr1[i] == arr2[j]){
                v.push_back(arr1[i]);
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr1[i] == arr3[j]){
                v.push_back(arr1[i]);
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr3[i] == arr2[j]){
                v.push_back(arr3[i]);
                break;
            }
        }
    }
    unordered_map<int,int>mp;
    for(int i = 0;i<v.size();i++){
        int key = v[i];
        mp[key]++;
    }
    vector<int>p;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
            p.push_back(itr->first);
    }
    display(p);
}
return 0;
}