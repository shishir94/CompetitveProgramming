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
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a;
    cin>>a;
    int l=0;
    int r=n-1;
    bool t =0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a==arr[mid])
        {
            t =1;
            cout<<"found"<<endl;
            break;
        }
        else if(a>arr[mid])
        {
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    
    }
    // cout<<t<<endl;
    if(t==0)
    {
        cout<<"not found"<<endl;
    }
    

}
return 0;
}