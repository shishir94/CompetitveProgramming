/*

1. Given  3 sorted array A B and C find the minimum absolute value of max(a,b,c)-min(a,b,c) where a , b and c 
belongs to array A,B,C respectively.

Brute force solution :: check all possible triplets . Time complexity is O(N^3).
 
2nd solution::
To minimize the given expression we can do ::

1. Reduce the max(a,b,c)
2. Increase the min(a,b,c)

  Since we are at the minimum element of each array we can't reduce the max(a,b,c) so we can only increase the
  value of min(a,b,c).


*/
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
    int arr1[n];
    int arr2[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    int i = 0;
    int j = 0;
    int k = 0;
    int ans;
    int c = abs(max(arr[0],max(arr1[0],arr2[0]))-min(arr[0],min(arr1[0],arr2[0])));
    while(i < n && j < n && k < n){
        int d = min(arr[i],min(arr1[j],arr2[k]));
        if(d == arr[i]){
            i++;
        }else if(d == arr1[j]){
            j++;
        }else if(d == arr2[k]){
            k++;
        }
        ans = abs(max(arr[i],max(arr1[j],arr2[k]))-min(arr[i],min(arr1[j],arr2[k])));
        if(ans < c){
            c = ans;
        }
       
    }
    cout<<c<<endl;
}
return 0;
}



