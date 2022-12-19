#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    int n = x.size();
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(x[i]== '9'){
            cnt++;
        }
    }
   if(cnt % 2 == 0){
       int y = stoi(x);
       y = y+1;
       cout<<y<<endl;
   }else{
       int y = stoi(x);
       y = y+2;
       cout<<y<<endl;
   }
}
return 0;
}