#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(int x, int y){
    string XY = to_string(x)+ to_string(y);
    string YX = to_string(y)+to_string(x);
    return (XY > YX);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int A[n];
    int cnt = 0;
    for(int i = 0;i<n;i++){
        cin>>A[i];
        if(A[i] == 0){
            cnt++;
        }
    }
    if(cnt == n){
        cout<<"0"<<endl;
    }else{
        sort(A,A+n,compare);
        string v = "";
        for(int i = 0;i<n;i++){
            v = v + to_string(A[i]);
        }
        cout<<v<<endl;
    }
}
return 0;
}