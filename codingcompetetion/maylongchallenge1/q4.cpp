#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
unordered_map< int, vector<int> > store;
int findFrequency(int arr[], int n, int left,
                      int right, int element)
{
    int a = lower_bound(store[element].begin(),
                        store[element].end(),
                        left)
            - store[element].begin();
    int b = upper_bound(store[element].begin(),
                        store[element].end(),
                        right)
            - store[element].begin();
 
    return b-a;
}
*/
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    int arr1[n+1];
    for(int i = 1;i<=n;i++){
        arr1[i] = log2(arr[i]);
    } 
    int ans[33][n+1] = {0};
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<= 32;j++){
            ans[j][i] = ans[j][i-1];
        }
        int bitPos;
        if(arr[i]){
            bitPos = log2(arr[i]);
        }else{
            bitPos = 32;
        }
        ans[bitPos][i]++;
    }
    /*
    for (int i=1; i<=n; ++i)
        store[arr1[i]].push_back(i); 
        */
    int q;
    cin>>q;
    while(q--){
        int l,r,x;
        cin>>l>>r>>x;
        int bPos;
        if(x){
            bPos = log2(x);
        }else{
            bPos = 32;
        }
        int cnt = ans[bPos][r]-ans[bPos][l-1];
        cnt = (r-l+1)-cnt;
        cout<<cnt<<endl;
        // int ans = findFrequency(arr1,n,l,r,c);
        // cout<<(r-l+1-ans)<<endl;
    }    
}
return 0;
}