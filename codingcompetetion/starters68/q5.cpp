#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[0]<<endl;
    }else if(n==2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
    }else{
        sort(arr,arr+n);
        long long arr1[n];
        int i =0 ;
        for(int j = 0; j < n ; j += 2){
            arr1[j] = arr[i++];
        }
        for(int j =1 ; j< n ;j+=2){
             arr1[j] = arr[i++] ;
        }
        bool g = true;
        for(int i =1; i < n-1 ; i++){
            if( (arr1[i] > arr1[i-1] && arr1[i] > arr1[i+1]) || (arr1[i] < arr1[i-1] && arr1[i] < arr1[i+1]) ){
                g = true;
            }else{
                g=false;
                break;
            }
        }  
        if(!g){
            int i =0;
            for(int j=1;j<n;j+=2){
                arr1[j]=arr[i++];
            }
            for(int j=0;j<n;j+=2){
                arr1[j]=arr[i++];
            }
            for(int i =1; i < n-1 ; i++){
                if( (arr1[i] > arr1[i-1] && arr1[i] > arr1[i+1]) || (arr1[i] < arr1[i-1] && arr1[i] < arr1[i+1]) ){
                    g = true;
                }else{
                    g=false;
                    break;
                }
            }
            if(!g){
                cout<<"-1"<<endl;
                continue;
            }
        }   
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
} 
return 0;
}