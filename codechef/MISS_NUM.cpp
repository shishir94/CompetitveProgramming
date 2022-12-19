#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long arr[4];
    for(int i = 0;i<4;i++){
        cin>>arr[i];
    }
    long long a,b;
    sort(arr,arr+4);
    bool t = true;
    long long y = (pow(arr[2],2))- 4*arr[3];
    long long x = sqrt(y);
    if(x*x != y){
        t = true;
    }else{
         a = (arr[2]+abs(x))/2;
         if(a == 0){
             t = true;
         }else{
            b = arr[2]-a;
            if(a >= 1 && a <= 10000 && b>= 1 && b<= 10000){
                if(((min(a,b)-max(a,b))== arr[0] && (min(a,b)/max(a,b)) == arr[1]) ||(((min(a,b)-max(a,b)))== arr[1] && ((min(a,b)/max(a,b))) == arr[0]) ){
                    t = false;
                }else{
                    t = true;
                }
            }
         }
    }
    if(t == false){
        cout<<(a,b)<<" "<<(a,b)<<endl;
    }else{
        long long y = pow(arr[3],2)- 4*arr[2];
        long long x = sqrt(y);
        if(x*x != y){
            cout<<"-1 -1"<<endl;
        }else{
            a = (arr[3]+abs(x))/2;
            if(a == 0){
                cout<<"-1 -1"<<endl;
            }else{
                b = arr[3]-a;
                if(a >= 1 && a <= 10000 && b>= 1 && b<= 10000){
                    if(((min(a,b)-max(a,b))== arr[0] && (min(a,b)/max(a,b)) == arr[1]) ||(((min(a,b)-max(a,b)))== arr[1] && ((min(a,b)/max(a,b))) == arr[0]) ){
                        cout<<min(a,b)<<" "<<max(a,b)<<endl;
                    }else{
                        cout<<"-1 -1"<<endl;
                    }    
                }
            }    
        }    
    }    
}
return 0;
}