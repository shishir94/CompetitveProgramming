#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr1[m];
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p.push(arr[i]);
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        p.push(arr1[i]);
    }
    // cout<<"1"<<endl;
    if((m+n)%2!=0){
        int x =(m+n)/2+1;
        // cout<<"x = "<<x<<endl;
        int cnt=0;
        // cout<<p.size()<<endl;   
        while(!p.empty()){
            double u =p.top();
            cnt++;
            p.pop();
            // cout<<cnt<<" "<<u<<endl;
            if(cnt==x){
                cout<<fixed<<setprecision(5)<<u<<endl;
                break;
            }
        }
    }else{
        int x =(m+n)/2;
        cout<<x<<endl;
        int cnt=0;
        while(!p.empty()){
            double u =p.top();
            cnt++;
            p.pop();
            if(cnt==x){
                double r = p.top();
                double ans = (u+r)/2;
                cout<<fixed<<setprecision(5)<<ans<<endl;
                break;
            }
        }
}
return 0;
}