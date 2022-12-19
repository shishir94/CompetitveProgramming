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

    long long arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    // vector<int> v(n,INT_MAX);  // stores nearest position of 1 from left hand side.
    // if(arr[0]==1){
    //     v[0]=0;
    // }
    // for(int i=1;i<n;i++){
    //     if(arr[i]==1){
    //         v[i]=i;
    //     }else{
    //         v[i]=v[i-1];
    //     }
    // }
    // vector<int> v1(n,INT_MAX);  // stores nearest position of 2 from right hand side.
    // if(arr[n-1]==2){
    //     v1[n-1]=n-1;    
    // }
    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]==2){
    //         v1[i]=i;
    //     }else{
    //         v1[i]=v1[i+1];
    //     }
    // }
    // vector<int>p;
    // for(int i=0;i<m;i++){
    //     int x = arr1[i]-1;
    //     if(arr1[i]==1){
    //         p.push_back(0);
    //     }else if(v[x]==INT_MAX&&v1[x]==INT_MAX){
    //         p.push_back(-1);
    //     }else if(v[x]!=INT_MAX && v1[x]==INT_MAX){
    //         p.push_back(arr1[i]-(v[x]+1));
    //     }else if(v1[x]!=INT_MAX && v[x]==INT_MAX){
    //          p.push_back(arr1[i]-(v1[x]+1));
    //     }else{
    //         int g = abs(arr1[i]-(v[x]+1));
    //         int h = abs(arr1[i]-(v1[x]+1));
    //         p.push_back(min(g,h));
    //     }
    // }
    // // finally printing the final answer
    // for(int i=0;i<p.size();i++){
    //     cout<<p[i]<<" ";
    // }
    // cout<<endl;
    vector<int>v(n+1,INT_MAX);
    vector<int>v1(n+1,INT_MAX);
    int a = -1;
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
            a=i;
        }
        if(a!=-1){
            v[i]=i-a;
        }
    }
    a=-1;
    for(int i=n;i>=1;i--){
        if(arr[i]==2){
            a=i;
        }
        if(a!=-1){
            v1[i]=a-i;
        }
    }
    vector<int>p;   
    while(m--){
        int u;
        cin>>u;
        if(u==1){
           cout<<0<<" ";
           continue;
        }
        long long ans = min(v[u],v1[u]);
        if(ans == INT_MAX){
            cout<<-1<<" ";
            continue;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    // for(int i=0;i<p.size();i++){
    //     cout<<p[i]<<" ";
    // }
    // cout<<endl;

}   
return 0;   
}