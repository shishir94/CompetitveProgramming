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
    string arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            string s1 = arr[i];
            string s2 = arr[j];
            if(s1[0]==s2[0]){
                continue;
            }
            bool v = true;
            swap(s1[0],s2[0]);
            for(int k =0;k<n;k++){
                if(s1 != arr[k] && s2 != arr[k]){
                    v = true;
                }else{
                    v = false;
                    break;
                }
            }
            if(v){
                ans+=2;
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}