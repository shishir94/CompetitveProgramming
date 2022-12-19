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
    if(n==4){
        cout<<"3 "<<"1 "<<"4 "<<"2"<<endl;
    }else if(n<4){
        cout<<"-1"<<endl;
    }else if(n%2==0){
        int x = 1;
        int v = n/2+1;
        for(int i =0;i<n;i++){
            if(i%2==0){
                cout<<x<<" ";
                x++;
            }else{
                cout<<v<<" ";
                v++;
            }
        }
        cout<<endl;
    }else{
        int x = 1;
        int v = n/2+2;
        for(int i =0;i<n;i++){
            if(i%2==0){
                cout<<x<<" ";
                x++;
            }else{
                cout<<v<<" ";
                v++;
            }
        }
        cout<<endl;
    }
}
return 0;
}