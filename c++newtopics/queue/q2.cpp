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
    int tickets[n];
    int k;
    for(int i = 0;i<n;i++){
        cin>>tickets[i];
    }
    cin>>k;
    queue<int>q;
    for(int i = 0;i<n;i++){
        q.push(i);
    }
    int ans = 0;
    while(!q.empty()){
        ans++;
        int temp = q.front();
        q.pop();
        if(tickets[temp]>=1){
            tickets[temp]--;
        }
        if(temp != k && tickets[temp]==0){
            continue;
        }
        if(temp == k&&tickets[temp]==0){
            break;
        }
        q.push(temp);
    }
    cout<<ans<<endl;
}

return 0;
}