#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> &bits){
    int m = bits.size();
    bool p = false;
    int a =0;
    while(a<m){
        if(bits[a]==1){
            p=false;
            a+=2;
        }else{
            p=true;
            a++;
        }
    }
    return p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> bits;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        bits.push_back(x);
    }
    cout<<fun(bits)<<endl;
}
return 0;
}