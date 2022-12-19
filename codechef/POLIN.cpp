#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x ;
    for(int i = 0;i <n;i++){
        cin>>x;
        int a[x] ,b[x];
        for(int i = 0;i<x;i++){
            cin>>a[i]>>b[i];
        }
        unordered_set<int> s,s1;
        for(int i = 0;i<x;i++){
            s.insert(a[i]);
            s1.insert(b[i]);
        }
        cout<<s.size()+s1.size()<<endl;
    }
    return 0;
}