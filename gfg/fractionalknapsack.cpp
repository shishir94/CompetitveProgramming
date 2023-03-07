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
    int W;
    cin>>W;
    int values[n];
    int weight[n];
    for(int i=0;i<n;i++){
        cin>>values[i];
    }
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }


    vector<pair<double,int>>v;
    for(int i = 0;i<n;i++){
        v.push_back(make_pair((double(values[i])/double(weight[i])),values[i]));
    }
    sort(v.begin(),v.end());

    vector<pair<double,int>>f;
    for(int i = 0;i<n;i++){
        f.push_back(make_pair((double(values[i])/double(weight[i])),weight[i]));
    }
    sort(f.begin(),f.end());

    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        p.push_back(make_pair(v[i].second,f[i].second));
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;

    }
    cout<<endl;

    double ans = 0;
    for(int i=n-1;i>=0;i--){
        if(p[i].second<=W){
            W-=p[i].second;
            ans+=p[i].first;
        }else{
            ans+=p[i].first*(double(W)/double(p[i].second));
            break;
        }
    }
    cout<<ans<<endl;
}
return 0;
}   