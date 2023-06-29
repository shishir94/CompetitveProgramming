#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    long long arr1[m];
    vector<pair<long long ,int>>v;
    map<long long ,long long>mp;
    int p=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mp.find(arr[i]) == mp.end()){
           v.push_back({arr[i],p});
           p++;
        }
        mp[arr[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int x = v.size() - 1;
    for (int k = 0; k < m; k++) {
        int y = arr1[k];
        while (x >= 0 && y > v[x].first) {
            x--;
        }
        if (x >= 0) {
            if(y < v[x].first){
                cout << v[x].second+1 << endl;
            }else{
                cout<<v[x].second<<endl;
            }
        } else {
            cout << "1" << endl; 
        }
    }
}
return 0;
}