#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v ){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
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
    int m;
    cin>>n;
    cin>>m;
    int A[n];
    int B[m];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    for(int i = 0;i<m;i++){
        cin>>B[i];
    }
    int i = 0;
    int j = 0;
    vector<int>v;
    while(i < n && j < m){
        if(A[i] > B[j]){
            v.push_back(B[j]);
            j++;
        }else{
            v.push_back(A[i]);
            i++;
        }
    }
 //   display(v);
    cout<<i<<" "<<j<<endl;
    if(i == n && j != m){
        for(int k = j;k<m;k++){
            v.push_back(B[k]);
        }
    }else if( i != n && j == m){
        for(int k = i;k<n;k++){
            v.push_back(A[k]);
        }
    }
    display(v);
}
return 0;
}