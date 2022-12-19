#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
	cin>>t;
	while (t--){
	    long long n;
	    cin>>n;
	    map<long long, long long> m;
	    for (int i=0; i<n; i++){
	        long long e;
	        cin>>e;
	        m[e]++;
	    }
	    long long maxf=0;
	    for (auto element: m){
	        maxf=max(element.second, maxf);
	    }
	    if (n>2 and maxf>1) cout<<n-maxf<<endl;
	    else if (n>2 and maxf==1) cout<<n-2<<endl;
        else if (n<=2) cout<<0<<endl;
	}
	return 0;
}
