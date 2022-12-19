#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        long long sum1 = 0;
        long long sum2 = 0;
        long long sum = 0;
        int arr1[b];
        int arr2[b];
        for(int i = 0;i<b;i++){
            cin>>arr1[i];
        } 
        for(int i = 0;i<b;i++){ 
            cin>>arr2[i];  
        }
        for(int i = 0;i<b;i++){ 
            sum1 = sum1 + arr1[i];
            sum2 = sum2 + arr2[i];
            if(sum1 == sum2 && arr1[i] == arr2[i]){
                sum = sum+ arr1[i];
            }
        }   
    cout<<sum<<endl;
    }
    return 0;
}