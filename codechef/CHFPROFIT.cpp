#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c>>d;
        long long x = b*c;
        long long y = b*d;
        long long ans = y-x;
        cout<<ans<<endl;
    }
    return 0;
}