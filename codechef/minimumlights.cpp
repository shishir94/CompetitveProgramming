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
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int B;
    cin>>B;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int r = 0;
        for(int j=B-1+i;j>i-B+1;j--){
            if(A[j]==1){
                ans++;
                r++;
                i = j+B;
                break;
            }
        }
        if(r==0){
            cout<<"-1"<<endl;
        }
    }
    cout<<ans<<endl;
}
return 0;
}