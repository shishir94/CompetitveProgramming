#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> bubble_a(vector<long long>& a){
    int n  =a.size();
    bool p ;
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++){
        p = false; 

        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                v.push_back({1,j+1});
                swap(a[j],a[j+1]);
                // cout<<1<<" "<<j<<endl;
                p=true;
            }
        }
        if(!p) break;
    }
    return v;
}

vector<pair<int,int>> bubble_b(vector<long long>& a){
    int n  =a.size();
    bool p ;
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++){
        p = false; 

        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                v.push_back({2,j+1});
                swap(a[j],a[j+1]);
                p=true;
            }
        }
        if(!p) break;
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<int,int>>v = bubble_a(a);
        vector<pair<int,int>>v1 = bubble_b(b);

        vector<pair<int,int>>c;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                c.push_back({3,i+1});
                // cout<<3<<" "<<i<<endl;
            }
        }
        cout<<(v.size()+v1.size()+c.size())<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        for(int i=0;i<v1.size();i++){
            cout<<v1[i].first<<" "<<v1[i].second<<endl;
        }

        for(int i=0;i<c.size();i++){
            cout<<c[i].first<<" "<<c[i].second<<endl;
        }
    }
    return 0;
}