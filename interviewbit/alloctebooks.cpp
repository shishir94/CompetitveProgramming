#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Binary Search Solution
/*
// Fastest Approach :: 
Time complexity = O(nlogn)
Space Complexity = O(1)

*/

/*
Solution Approach :: First we find the range of answer. Rnage of answer must be between minimum element of given array and
sum of all the elements of the array.
Then we will apply Binary Search to it.
We find the middle number and check if the allocation is possible or not if not we will decrease the range of answer by 
increasing the lower range value and do the same process until lower value <= higher value.
And if possible we will decrease the range by decreasing the higher range value and do the same process until 
lower value <= higher value.
*/

bool allocationispossible(int n, int A[],int B,int b){
    int allocated =1;
    int pages =0;
    for(int i=0;i<n;i++){
        if(A[i]>b){
            return false;
        }
        if(pages+A[i]>b){
            allocated+=1;
            pages+=A[i];
        }else{
            pages+=A[i];
        }
    }
    if(allocated>B){
        return false;
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
    int A[n];
    int B;
    int low = INT_MAX;
    int high = 0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        low = min(low,A[i]);
        high+= A[i];
    }
    cin>>B;
    int res =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(allocationispossible(n,A,B,mid)){
            res = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<res<<endl;
}
return 0;
}