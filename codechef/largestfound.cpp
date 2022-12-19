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
    int A[n];
    int cnt = 0;
    for(int i = 0;i<n;i++){
        cin>>A[i];
        if(A[i]== 0){
            cnt++;
        }
    }
    if(cnt == n){
        cout<<"0"<<endl;
    }else{
        sort(A,A+n);
        string s = to_string(A[n-1]);
        string x = " ";
        string f = " ";
        int i = n-2;
        while(i >= 0){
            x = s+ to_string(A[i]);
            f = to_string(A[i]) + s;
            s = max(x , f);
            cout<<s<<endl;
            i--;
        }
        cout<<s<<endl;
    }
}
return 0;
}