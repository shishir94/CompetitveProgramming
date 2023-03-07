#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n,m,q;
cin>>n>>m>>q;
long long s[q];
for(int i=0;i<q;i++){
    cin>>s[i];
}
// long long x = INT_MIN;
// long long y = INT_MAX;
// long long value_x=0;
for(int i=0;i<q;i++){
    int end =0;
    while(end<n){
        if(s[i]>end){
            s[i]=s[i]-(end+1);
        }else{
            break;
            // cout<<"1"<<endl;
        }
        end++;
        // cout<<end<<endl;
    }
    cout<<s[i]<<endl;
    cout<<"1"<<" "<<end<<endl;
    vector<int>arr;
    while(end>=1){
        // cout<<s[i]<<" "<<endl;
        arr.push_back(min(m-1,s[i]/end));
        // cout<<s[i]/end<<endl;
        s[i]=s[i]-(arr[arr.size()-1]*end);
        end--;
        // cout<<s[i]<<endl;
    }
    // for(int i=0;i<q;i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<endl;
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]+1<<" ";
    }
    cout<<endl;
}

return 0;
}