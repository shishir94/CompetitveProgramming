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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int>st;
    set<int>res;
    for(int i=0;i<n;i++){
        while(st.empty()==false && st.top()<=arr[i]){
            int temp = st.top();
            st.pop();res.insert(arr[i]-temp);
        }
        st.push(arr[i]);
    }
    while(st.empty()==false){
        st.pop();
    }
    for(int i=n-1;i>=0;i--){
        while(st.empty()==false && st.top()<=arr[i]){
            int temp=st.top();
            st.pop();
            res.insert(arr[i]-temp);
        }
        st.push(arr[i]);

    }
    cout<<res.size()<<endl;
}
return 0;
}