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
    int m;
    cin>>n>>m;
    int arr[n];
    int arr1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    stack<int> st;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int element = arr[i];
        while(!st.empty() && element > st.top()){
            mp[st.top()] = element;
            st.pop();
        }
        st.push(element);
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
return 0;
}