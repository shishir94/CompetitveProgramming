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
    vector<vector<int>>ranges;
    for(int i=0;i<n;i++){
        vector<int>d;
        for(int j=0;j<2;j++){
            int x;
            cin>>x;
            d.push_back(x);
            // d.push_back(c);
        }
        ranges.push_back(d);
        d.clear();
    }

    int mod = 1000000007;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(ranges[i][0],ranges[i][1]));
    }
    sort(v.begin(),v.end());
    queue<pair<int,int>>q;
    q.push({v[0].first,v[0].second});
    int cnt =1; 
    int i=1;
    int end = v[0].second;
    while(!q.empty()&& i<n){
        q.pop();
        if(end >= v[i].first){
            end =  max(end,v[i].second);
            q.push({v[i].first,v[i].second});
        }else{
            cnt++;
            q.push({v[i].first,v[i].second});
        }
        i++;
    }
    // cout<<cnt<<endl;
    // cout<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

}
return 0;
}