#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string n;
    cin>>n;
    int s=n.size();
    string x = "314159265358979323846264338327";
    int cnt=0;
    int y =min(s,30);
    for(int i=0;i<y;i++){
        if(n[i]==x[i]){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}