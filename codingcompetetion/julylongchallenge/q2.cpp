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
    long long arr[n+1];
    for(int i = 0;i<n+1;i++){
        cin>>arr[i];
    }
    bool t = true;
    int a = 0;
    int b = 0;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=n;j++){
            for(int k = 0;k<=n;k++){
                int f = (i^k)+(j^k)+((arr[0]-i-j)^k);
                if(f == arr[k] && (arr[0]-i-j)<=n){
                    t = true;
                }else{
                    t = false;
                    break;
                }
            }
            if(t){
               a = i;
               b = j;
               break;
            }else{
               continue;
            }
        }
        if(t){
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<(arr[0]-a-b)<<endl;
}
return 0;
}