#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[n][m];
    long long sum  =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }
    if(sum<=k){
        cout<<"-1"<<endl;
    }else{
        // long long ans = INT_MAX;
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0){
                    dp[i][j]=arr[0][0];
                }else if(i==0){
                    dp[i][j]=arr[i][j]+dp[i][j-1];
                }else if(j==0){
                    dp[i][j]=arr[i][j]+dp[i-1][j];
                }else{
                    dp[i][j]= dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+arr[i][j];
                }
            }
        }
        long long start = 0;
        long long end = max(n,m)-1;
        long long mid = (start+end)/2;
        long long ans = end;
        while(start<=end){
            int f=0;
            for(int x=0;x<n;x++){
                for(int y=0;y<m;y++){
                    if(arr[x][y]==0){
                        continue;
                    }
                    long long i =x+mid;
                    long long j = y+mid;
                    i = min(n-1,i);
                    j = min(m-1,j);
                    int low_x =x-(mid+1);
                    int low_y = y-(mid+1);
                    long long curr = dp[i][j];
                    if(low_x>=0){
                        curr -=dp[low_x][j];
                    }
                    if(low_y>=0){
                        curr -= dp[i][low_y];
                    }
                    if(low_x>=0 && low_y >=0){
                        curr+=dp[low_x][low_y];
                    }
                    if(curr>=k+1){
                        f=1;
                        break;
                    }
                }
                if(f){
                    break;
                }
            }
            if(f){
                ans = min(ans,mid);
                end = mid-1;
                mid=(start+end)/2;
            }else{
                start = mid+1;
                mid=(start+end)/2;
            }
        }
        cout<<ans<<endl;
    }

}
return 0;
}