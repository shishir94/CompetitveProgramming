#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,d;
    cin>>n>>d;
    int x = n;
    int count = 0;
    int rem;
    int c = 0;
    while(x>0){
        rem = x%10;
        x = x/10;
        c++;
        if(rem==d){
            x = (x)*pow(10,c)+(rem+1)*pow(10,c-1);
            count = x -n;
            c=0;
        }
    }
    cout<<count<<endl;
}
return 0;
}