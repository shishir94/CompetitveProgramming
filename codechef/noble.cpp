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
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    vector<int>p;
    int sum = 0;
    vector<int>l;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
        sum += itr->second;
    }
    bool t = false;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
        sum = sum -itr->second;
        if(itr->first == sum){
            t = true;
            break;
        }
    }
    if(t){
        cout<<"1"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}