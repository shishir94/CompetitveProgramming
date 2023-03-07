#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int k=1;
    	int j=n;
    	for(int i=0;i<n;i++){
    	    if(i%2!=0){
    	        cout<<k<<" ";
    	        k++;
    	    }else{
    	        cout<<j<<" ";
    	        j--;
    	    }
    	}
    	cout<<endl;
    }
	return 0;
}
