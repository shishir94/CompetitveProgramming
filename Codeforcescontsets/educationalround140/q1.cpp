#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    unordered_set<int>s1;
    unordered_set<int>s2;
    for(int i=0;i<3;i++)
{   
    int x,y;
    cin>>x>>y;
    s1.insert(x);
    s2.insert(y);
}
int d = s1.size();
int y = s2.size();
if(d==2&&y==2){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}
}
return 0;
}