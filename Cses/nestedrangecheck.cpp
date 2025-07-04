#include<bits/stdc++.h>
using namespace std;


bool compare(vector<long long>& a,vector<long long>& b){
    return a[0] == b[0]?a[1]>b[1]:a[0]<b[0];
}
int main(){
    long long n;
    cin>>n;


    vector<vector<long long>>v(n);
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        v[i] = {a,b,i};
    }

    sort(v.begin(),v.end(),compare);

    vector<int>c1(n,0),c2(n,0);

    long long mi_s = 1e11;
    for(int i=n-1;i>=0;i--){
        if(mi_s <= v[i][1]) c1[v[i][2]] = 1;

        mi_s = min(mi_s, v[i][1]);
    }

    long long mx_s =0;
    for(int i=0;i<n;i++){
        if(mx_s >= v[i][1]) c2[v[i][2]]=1;

        mx_s = max(mx_s,v[i][1]);
    }

    for(int i=0;i<n;i++) cout<<c1[i]<<" ";
    cout<<endl;;

    for(int i=0;i<n;i++) cout<<c2[i]<<" ";
    cout<<endl;
    
    return 0;
}