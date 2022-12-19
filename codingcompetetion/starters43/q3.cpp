#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a , b , c;
    cin>>a>>b>>c;
    long long bit = 1;
    bool t = true;
    for(int i = 0;i<30;i++){
        if(a==b && b ==c){
            break;
        }
        bit = pow(2,i);
        int cnt = 0;
        cnt = ((a&bit)!= 0)+((b&bit)!= 0)+((c&bit)!= 0);
        // cout<<(a&bit)<<endl;
        if(cnt == 0 || cnt == 3){
            t = false;
            break;
        }else if(cnt == 1){
            if((a&bit)){
                a+=bit;
            }else if((b&bit)){
                b+=bit;
            }else if((c&bit)){
                c+=bit;
            }
        }else{
            if((a&bit)==0){
                a+=bit;
            }else if((b&bit)==0){
                b+=bit;
            }else if((c&bit)==0){
                c+=bit;
            }
        }

    }
    if(t == true && a == b && b==c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}