// Approach ::
/*
After changing the numbers of array the sum reamins the same, the first element will always be increarsed and the last 
can only be decreased. 
Lets us suppose that maximum element of array is max.
and its first three element be x , y , z then we can make it x+1,y,z-1 ; lets us suppose that there sum is s. then this sum
is less than equal to 3 times the maximum elemnt of the array.
So we apply binary search on the answer.
*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool valid(int n,int nums[],int mid){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum +=nums[i];
        if(sum > mid*(i+1)){
            return false;
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int nums[n];
    int m =0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        m = max(m,nums[i]);
    }
    int low =0;
    int high = m;
    int ans =0;
    while(low<=high){
        int mid = (low+high)/2;
        if(valid(n,nums,mid)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;

}
return 0;
}