#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    double b;
    string c;
    cin>>a;
    double arr[7];
    double ans1 = INT_MIN;
    double ans2 = INT_MAX;
    double sum = 0;
    for(int i = 0 ; i <a;i++){
        cin>>c;
        cin>>b;
        for(int i = 0 ; i<7;i++){
            cin>>arr[i];
            sum = sum + arr[i];
            if(ans1 < arr[i]){
                ans1 = arr[i];
            }
           if(ans2 > arr[i]){
                ans2 = arr[i];
            }   
        }
        sum = sum - ans1-ans2;
        cout<<c<<" "<<fixed<<setprecision(2)<<sum*b<<endl;
    }
    return 0;
}