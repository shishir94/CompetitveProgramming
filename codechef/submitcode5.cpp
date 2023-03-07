// // Fractional Knapsack
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;int W;
cin>>n>>W;
int values[n];
int w[n];
for(int i=0;i<n;i++){
    cin>>values[i];
}
for(int i=0;i<n;i++){
    cin>>w[i];
}
vector<pair<double,int>>v;
for(int i=0;i<n;i++){
    v.push_back(make_pair(double(values[i])/double(w[i]),values[i]));
}
sort(v.begin(),v.end());


vector<pair<double,int>>f;
for(int i=0;i<n;i++){
    f.push_back(make_pair(double(values[i])/double(w[i]),w[i]));
}
sort(f.begin(),f.end());


vector<pair<int,int>>p;
for(int i=0;i<n;i++){
    p.push_back(make_pair(v[i].second,f[i].second));
}


long long ans =0;
for(int i=n-1;i>=0;i--){
    if(p[i].second<=W){
        W-=p[i].second;
        ans+=p[i].first;
    }else{
        ans+=p[i].first*(double(W)/p[i].second);
    }

}
cout<<ans<<endl;
return 0;
}


// Activity Selection

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int s[n];
int e[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<n;i++){
    cin>>e[i];
}
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    v.push_back(make_pair(e[i],s[i]));
}
sort(v.begin(),v.end());
map<int,int>mp;
mp[v[0].second]=v[0].first;
int x = v[0].first;
for(int i=1;i<n;i++){
    if(v[i].second>x){
        mp[v[i].second]=v[i].first;
        x=v[i].first;
    }
}
cout<<mp.size()<<endl;
return 0;
}



// Assign Mice Holes

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int m[n];
int h[n];
for(int i=0;i<n;i++){
    cin>>m[i];
}
for(int i=0;i<n;i++){
    cin>>h[i];
}
sort(m,m+n);
sort(h,h+n);
vector<int>v;
for(int i=0;i<n;i++){
    v.push_back(abs(m[i]-h[i]));
    }
sort(v.begin(),v.end());
cout<<v[n-1]<<endl;
return 0;
} 


// Job Sequencing Problem ::

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int id[n];
int dead[n];
int profit[n];
for(int i=0;i<n;i++){
    cin>>id[i];
}
for(int i=0;i<n;i++){
    cin>>dead[i];
}
for(int i=0;i<n;i++){
    cin>>profit[i];
}
vector<pair<int,int>>b;
for(int i=0;i<n;i++){
    b.push_back(make_pair(profit[i],dead[i]));
}
sort(b.begin(),b.end());
int ans = 0;
int cnt = 0;
vector<int>v(n,-1);
vector<int>h;
for(int i=n-1;i>=0;i--){
    for(int j =min(n,b[i].second)-1;j>=0;j--){
        if(v[j]==-1){
            ans+=b[i].first;
            cnt++;
            v[j]=0;
            break;
        }
    }
}
vector<int>l;
l.push_back(cnt);
l.push_back(ans);
for(int i=0;i<l.size();i++){
    cout<<l[i]<<" ";
}
cout<<endl;
return 0;
}