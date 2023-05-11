#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool fun(double sum1,double sum2,long long n,long long m ,long long x,long long y,long long k){
    double m1 = (sum1+x*k)/(n+x);
    double m2 = (sum2+y)/(m+y);
    return m1>m2;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[n];
    long long arr1[m];
    long long sum1 =0,sum2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        sum2+=arr1[i];
    }
    if(k==1){
        cout<<"-1"<<endl;
        continue;
    }
        int ans = n+m+100;
        for(int x=0;x<=n+m+2;x++){
            long long l=0;
            long long r = n+m+2;
            while(l<=r){
                int mid = (l+r)/2;
                if(fun(sum1,sum2,n,m,x,mid,k)){
                    r=mid-1;
                    ans = min(ans,x+mid);
                }else{
                    l=mid+1;
                }
            }
        }
        cout<<ans<<endl;

}
return 0;
}