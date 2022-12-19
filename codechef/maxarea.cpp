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
    string A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    string x = A[0];
    char s = x[0];
    int d = 0;
    char e ;
    for(int i = n-1;i>=0;i--){
        char y = A[i][0];
        if(s != y){
            d = i;
            e = y;
            break;
        }
    }
    cout<<s<<" "<<e<<endl;
    cout<<d<<endl;
    int l = 0;
    bool t = false;
    for(int i = x.size()-1;i>=0;i--){
        for(int j = 0;j < n-1;j++){
            if(A[j][i] != s && A[j][i] != e ){
                t = true;
                break;
            }
        }
        if(t){
            l = i;
            break;
        }
    }
    cout<<l<<endl;
    cout<<ceil(((l+1)*(d+1))/2.0)<<endl;
}
return 0;
}