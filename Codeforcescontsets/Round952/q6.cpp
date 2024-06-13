#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool valid(vector<long long>&a , vector<long long>&c, long long mid,long long h)
{
    long long count = 0;
    for(int i=0;i<c.size();i++)
    {
        long long st = 0;
        if(mid%c[i] == 0)
        {
            st = a[i]*(mid/c[i]);
        }
        else{
            st = a[i]*((mid/c[i])+1);
        }
        count += st;
        if(count >= h) return true;
    }
    // cout<<count<<endl;
    return count >= h;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long h,n;
    cin>>h>>n;

    vector<long long>a(n),c(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>c[i];
    }
    long long low = 0;
    long long high = 1e11;
    long long ans = -1; 
    // cout<<valid(a,c,1,h)<<endl;
    while(low <= high)
    {
        long long mid = low+(high-low)/2;
        if(valid(a,c,mid,h)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;
}
return 0;
}