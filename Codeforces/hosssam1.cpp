    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long x=arr[0];
        long long y =arr[n-1];
        map<long long,long long>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        if(abs(x-y)==0){
            long long ans = n*(n-1);
            cout<<ans<<endl;
        }else{
            long long u = mp[x];
            long long k = mp[y];
            long long ans =2*u*k;
            cout<<ans<<endl;
        }
    }
    return 0;
    }