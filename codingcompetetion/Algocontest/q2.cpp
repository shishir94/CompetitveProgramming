#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans =0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int x = s.size();
        ans = max(ans,x);
    }
    cout<<ans<<endl;
    int m;
    cin>>m;
    string f;
    cin>>f;
    vector<string>v;
    string x ="";
    x=x+f[0];
    for(int i=1;i<ans;i++){
        
        x = x+f[i];
        v.push_back(x);
    }
    cout<<"1";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
return 0;
}