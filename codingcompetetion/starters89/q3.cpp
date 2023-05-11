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
    int a=0,b=0;
    int pos[n+1];
    // map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pos[arr[i]]=i;
        // mp[arr[i]]=i;
        
    }
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // long long sum =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==-1){
    //         sum = sum+(i+1);
    //     }
    // }
    // long long ans =1;
    // if(n%2==0){
    //     ans = ans*n/2;
    //     ans = ans*(n+1);
    // }else{
    //     ans = ans*(n+1)/2;
    //     ans=ans*n;
    // }
    // cout<<abs(ans-2*sum)<<endl;
   // int cnt=1;
   int ans =0;
   int start=pos[n];
   int end = pos[n];
   set<int>st;
   int mx = n;
   st.insert(n);
   for(int i=n-1;i>=1;i--){
        while(!(start<=pos[i] && pos[i]<=end)){
            if(pos[i]<start){
                start--;
                
                mx = min(mx,arr[start]);
                st.insert(arr[start]);
            }
            if(pos[i] >end ){
                end++;
                
                mx = min(mx,arr[end]);
                st.insert(arr[end]);
            }
        }
        if((n-mx+1)==st.size() && st.size()!=n){
            int te = st.size();
            ans = max (ans,te);
        }
   }
//    cout<<ans<<endl;

   cout<<max(1,ans)<<endl;


}
return 0;
}