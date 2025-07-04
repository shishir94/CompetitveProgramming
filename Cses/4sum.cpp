#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x;
    cin>>n>>x;

    vector<pair<long long,long long>>v(n);
    for(int i=0;i<n;i++){
        int w;
        cin>>w;
        v[i] = {w,i};
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long target = x-(v[i].first+v[j].first);

            int k = j+1;
            int l = n-1;

            while(k<l){
                if(v[k].first + v[l].first == target){
                    cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[k].second+1<<" "<<v[l].second+1<<endl;
                    return;
                    // break;
                }

                else if(v[k].first + v[l].first < target) k++;
                else l--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return ;
}
int main(){
    solve();
    return 0;
}