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
    if(n%2!=0)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        
    }else{
        cout<<"1 "<<"3 ";
        for(int i=0;i<n-2;i++){
            cout<<"2 ";
        }
        cout<<endl;
    }
}
return 0;
}