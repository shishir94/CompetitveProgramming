#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;;
    cin>>n>>m;
    if(m>n+1||m<1-n){
        cout<<"-1"<<endl;
    }else{
        long long x = 1;
        string str="";
        for(int i=0;i<n;i++){
            if(x<m){
                x+=1;
                str+='+';
            }else if(x>m){
                x+=-1;
                str+='-';
            }else{
                str+='*';
            }
        }
        cout<<str<<endl;
    }

}
return 0;
}