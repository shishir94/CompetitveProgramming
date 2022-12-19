#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(true){
        cin>>n;
        if( n == 0){
            break;
        }
        int a[n][n];
        int val = 1;
        int lim = (n-1)/2 + 1;
        /*
        int lim;
        if(n % 2 == 0){
            lim = n/2;
        }else{
            lim = (n/2) + 1;
        }*/
        while(val <= lim){
            for(int j=val-1;j<=n-val;j++){
                a[val-1][j] = val;
            }
            for(int i=val-1;i<=n-val;i++){
                a[i][n-val] = val;
            }
            for(int j=val-1;j<=n-val;j++){
                a[n-val][j] = val;
            }
            for(int i=val-1;i<=n-val;i++){
                a[i][val-1] = val;
            }
            val++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j == 0){
                    cout<<setw(3);
                    cout<<a[i][j];
                    continue;
                }
                cout<<" "<<setw(3)<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
