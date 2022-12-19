#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
	long long a=x/2;
	long long b=(x+1)/2;
	vector<long long>v;
	for(long long i=1;i*i<=y;i++){
	    if(y%i==0){
	        if(y/i<a || i>b){
	            v.push_back(i);
	            v.push_back(y/i);
	            break;
	        }
	    }
	}
	if(v.size()==0){
	    cout<<"-1\n";
	}
	else{
	    cout<<a<<" "<<b<<"\n";
	    cout<<v[0]<<" "<<v[1]<<"\n";
	}
}
return 0;
}