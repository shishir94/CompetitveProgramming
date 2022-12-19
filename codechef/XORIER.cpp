#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
ios_base::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int arr[n];
    int arr1[1100001]={0};
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    arr1[arr[i]]++;
	}
	long long odd=0;
    long long even=0;
    long long ans=0;
	for(int i=0;i<n;i++){
	    if(arr[i]%2!=0){
	    	odd++;
        }else{
	    	even++;
        }
	}
	for(int i =0;i<n;i++){
	    if(arr[i]%2!=0){
            ans+=odd;
        }else{ 
            ans+=even;
        }
        ans-=arr1[arr[i]^2];
	    ans-=arr1[arr[i]];
    }
	cout<<(ans/2)<<endl;
}
return 0;
}