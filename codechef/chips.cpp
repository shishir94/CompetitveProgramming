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
    vector<int>p;
    for(int i = 0;i<n;i++){
        if(arr[i] != 0){
            p.push_back(arr[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            p.push_back(arr[i]);
        }
    }
    display(p);
}
return 0;
}