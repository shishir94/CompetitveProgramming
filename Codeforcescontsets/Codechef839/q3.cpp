#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long k ,n;
    cin>>k>>n;
    long long f = sqrt(1+8*(n-k));
    f = 1+f;
    f=f/2;
    vector<int>v;
    int dif = 1;
    int sum = 0;
    v.push_back(1);
    for(int i=0;i<k-1;i++){
        if(dif<=f){
            int j=v[v.size()-1]+dif;
            v.push_back(j);
            dif++;
        }else{
            int j=v[v.size()-1]+1;
            v.push_back(j);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
return 0;
}