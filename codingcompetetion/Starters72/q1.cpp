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
    if(n%2==0){
        if(n==2||n==4){
            cout<<"-1"<<endl;
        }else{
            cout<<"1 "<<"2 "<<n/2<<endl;
        }
    }else{
        if(n==3){
            cout<<"-1"<<endl;
        }else{
            bool u = false;
            int f=0;
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    u=true;
                    f=i;
                    break;
                }else{
                    u=false;
                }
            }
            // cout<<f<<endl;
            // cout<<n/f<<endl;
            // cout<<u<<endl;
            if(u){
                int x = n/f;
                // cout<<x<<endl;
                if(x!=f&&x!=1){
                    cout<<"1"<<" "<<x<<" "<<f<<endl;
                }else{
                    cout<<"-1"<<endl;
                }
            }else{
                cout<<"-1"<<endl;
            }
        }

    }
}
return 0;
}