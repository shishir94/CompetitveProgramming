#include<iostream>
#include<cassert>
#include<bits/stdc++.h>
#define int long long
#define NDEBUG
using namespace std;

int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    int idx=0;
    vector<int>numbers(4);
    numbers[0]=n;
    numbers[1]=n;
    numbers[2]=n;
    if(n==1){
        numbers[0]=1;
        numbers[1]=4;
        numbers[2]=3;
        numbers[3]=2;
        // cout<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<" "<<numbers[3]<<endl;
    }
    for(int i=0;i<60;i++){
        long long temp=1;
        if(n&(temp<<i)==0){
            numbers[idx]=numbers[idx]+(temp<<i);
            if(idx ==2){
                numbers[idx+1]+=(temp<<i);
            }
            idx++;
            idx=idx%3;
        }
    }
    // cout<<"temp "<<temp<<" "<<"idx "<<idx<<endl;
    for(int i=0;i<4;i++){
        assert(numbers[i]!=0);
        for(int j=i+1;j<4;j++){
            assert(numbers[i]!=numbers[j]);
        }
    }
    int final = ((numbers[0]&numbers[1]))|numbers[2];
    final = final^numbers[3];
    assert(final==n);
    if(numbers[3]==0){
        cout<<"-1"<<endl;
    }else{
        cout<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<" "<<numbers[3]<<endl;
    }
}
return 0;
}