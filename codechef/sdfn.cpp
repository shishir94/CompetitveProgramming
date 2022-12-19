#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		while(b%2==0)b/=2;
		if(b==1)cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
		
		
	}
	return 0;
}
