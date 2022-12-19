// We have to find the sum of the contiguous subarray within a arr[] with the largest sum. 
// Kadane's Approach :: 
/*
Maintain a variable a that stores the maximum sum of subarray ending at a current index and maintaion another variable b which 
stores the maximum sum of subarray so far and if a>0 compare it with variable b and update it accordingly.
*/
// Implementation ::

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lagrestcontiguoussumsubarray(int n , int arr[]){
    int a = 0;
    int b = INT_MIN;
    int start = 0;
    int end = 0;
    int s = 0;
    for(int i=0;i<n;i++){
        a+=arr[i];
        if(b<a){
            b =a;
            start = s;
            end = i;
        }
        if(a<0){
            a=0;
            s= i+1;
        }
    }
    return b;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lagrestcontiguoussumsubarray(n,arr)<<endl;
}
return 0;
}

