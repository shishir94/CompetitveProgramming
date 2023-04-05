#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int r,d;
    cin>>r>>d;
    string y;
    cin>>y;
    // string y = to_string(n);
    int u=-1;
    for(int i=0;i<y.size();i++){
        if(y[i]-'0'<d){
            u=i;
            break;
        }
    }
    if(u==0){
        y = to_string(d)+y;
        cout<<y<<endl;
    }else if(u==-1){
        y=y+to_string(d);
        cout<<y<<endl;
    }else{
        string e="";
        for(int i=0;i<u;i++){
            e.push_back(y[i]);
        }
        e = e+to_string(d);
        for(int i=u;i<r;i++){
            e.push_back(y[i]);
        }
        cout<<e<<endl;
    }
    
}
return 0;
}