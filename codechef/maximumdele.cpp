#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
long long res = 1;
while(y>0){
if(y%2==1){
res = (res*x)%p;
}
y = y>>1;
x = (x*x)%p;
}
return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k,l;
	    cin>>n>>k>>l;
	    long long arr[n];
	    priority_queue<long long>q;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        q.push(arr[i]);
	    }
    	
    	queue<int>q1;
    	for(int i=1;i<=k;i++){
    	    q1.push(i);
    	}
    	long long ans = 0;
    	while(!q.empty()){
    	    if(q1.front() == l){
    	        ans += q.top();
    	       // q.pop();
    	    }
    	    q.pop();
    	    int x = q1.front();
    	    q1.pop();
    	    q1.push(x);
    	}
    	cout<<ans<<endl;
}
return 0;
}