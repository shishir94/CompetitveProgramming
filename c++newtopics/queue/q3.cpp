#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string A;
    cin>>A;
    queue<int>q;
    unordered_map<char,int>mp;
    string ans = "";
    for(int i = 0;i<A.size();i++){
        if(!q.empty()&&A[i]==q.front()){
            q.pop();
            while(!q.empty()&&mp[q.front()]>1){
                q.pop();
            }
        }
        if(mp.find(A[i])==mp.end()){
            q.push(A[i]);
        }
        if(q.empty()){
            ans.push_back('#');
        }else{
            ans.push_back(q.front());
        }
        mp[A[i]]++;
    }
    cout<<ans<<endl;
}
return 0;
}