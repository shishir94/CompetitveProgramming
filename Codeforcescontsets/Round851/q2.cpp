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
        cout<<n/2<<" "<<n/2<<endl;
    }else{
        string y = to_string(n);
        reverse(y.begin(),y.end());
        string x ="";
        string u = "";
        int temp =0;
        for(int i=0;i<y.size();i++){
            if((y[i]-'0')%2!=0){
                x = x + to_string((y[i]-'0')/2+temp);
                u = u+ to_string((y[i]-'0')/2-temp+1);
                if(temp==0){
                    temp=1;
                }else{
                    temp=0;
                }
            }else{
                x = x + to_string((y[i]-'0')/2);
                u = u + to_string((y[i]-'0')/2);
            }

        }
        reverse(x.begin(),x.end());
        reverse(u.begin(),u.end());
        int p = stoi(x);
        int m = stoi(u);
        cout<<p<<" "<<m<<endl;
    }
}
return 0;
}