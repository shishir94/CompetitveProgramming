// Approach ::
/*
Hume esse do subproblem me divide karna h. 
let's say that ballons are ::  q  w e r t y u 
1).mann lo ki sabse phele humne r wale ballon ko burst kar dia or usko index mann lia ind.
ab humare pass do seperate subarry bacchi q w e and t y u
magar hum enhe independently solve nhi kar sakte kyuki agar hume e ko burst karna h to uski value hogi w*e*t or t dusri subaary 
me aa raha h isilye this approach is wrong;

2). mann lete h ki humne r wale ballon ko sabse end me burst kia jiska index ind h.
to uski value hogi t or problem do seperate part me break ho jayegi.
*/

// Recursion Solution -----> Time limit exceed.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ans(int i,int j ,vector<int> &v){
    if(i>j){  // base case
        return 0;
    }
    int maxi = INT_MIN;
    for(int ind=i;ind<=j;ind++){  // ballon at ind will burst at end.
        int cost = v[i-1]*v[ind]*v[j+1]+ans(i,ind-1,v)+ans(ind+1,j,v);
        maxi = max(maxi,cost);
    }
    return maxi;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    int x = v.size();
    v.push_back(1);
    v.insert(v.begin(),1);
    cout<<ans(1,x,v)<<endl;

}
return 0;
}


// Memoization Technique ::
// No time limit exceeded.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ans(int i,int j ,vector<int> &v ,vector<vector<int>> &dp){
    if(i>j){  // base case
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int maxi = INT_MIN;
    for(int ind=i;ind<=j;ind++){  // ballon at ind will burst at end.
        int cost = v[i-1]*v[ind]*v[j+1]+ans(i,ind-1,v,dp)+ans(ind+1,j,v,dp);
        maxi = max(maxi,cost);
    }
    return dp[i][j]= maxi;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    int x = v.size();
    v.push_back(1);
    v.insert(v.begin(),1);
    vector<vector<int>>dp(x+1,vector<int>(x+1,-1));
    cout<<ans(1,x,v,dp)<<endl;

}
return 0;
}



// Tabulation technique ::
// No time limit exceeded.


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
    vector<int>v;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    int x = v.size();
    v.push_back(1);
    v.insert(v.begin(),1);
    vector<vector<int>>dp(x+2,vector<int>(x+2,0));
    for(int i=x;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i>j){
                continue;
            }
            int maxi = INT_MIN;
            for(int ind=i;ind<=j;ind++){  // ballon at ind will burst at end.
                int cost = v[i-1]*v[ind]*v[j+1]+dp[i][ind-1]+dp[ind+1][j];
                maxi = max(maxi,cost);
            }
            dp[i][j]= maxi;
        }
    }
    cout<<dp[1][n]<<endl;
}
return 0;
}