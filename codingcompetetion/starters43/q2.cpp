#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    int cnt = 0;
    for(int i = 1;i*i<=n;i++){
        if(n %i == 0){
            if(i*i != n){
                cnt = cnt+2;
            }else{
                cnt = cnt+1;
            }
        }
    }if(n%2==0){
        cout<<(cnt-2)*2+1<<endl;
    }else{
    cout<<2*(cnt-1)<<endl;
    }
}
return 0;
}