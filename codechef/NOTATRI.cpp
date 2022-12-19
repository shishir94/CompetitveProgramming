#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(true){
        cin>>a;
        if(a == 0){
            break;
        }
        int arr[a];
        for(int i = 0;i<a;i++){
            cin>>arr[i];
        }
        sort(arr,arr+a);
        int cnt = 0;
        for(int i = a-1;i >= 2;i--){
            int x = 0;
            int z = i-1; 
            while(x < z){   
                int sum = arr[x] + arr[z];
                z--;
                cout<<sum<<endl;
                if(sum < arr[i]){
                    cnt++;
                }    
            }               
        }
        cout<<cnt<<endl;
    }    
    return 0;
}