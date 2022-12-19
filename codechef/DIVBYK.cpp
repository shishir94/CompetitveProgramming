#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){	
	    long long n,y;
    	cin>>n>>y;
    	long long arr[n];
    	long long a = 1;
    	int cnt = 0;
    	for(int i=0;i<n;i++){
    	    cin>>arr[i];
    	    a=a*arr[i]%y;
    	}
        if(a==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
