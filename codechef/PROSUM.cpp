#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        long long ar[b];
        for(int i = 0;i<b;i++){
            cin>>ar[i]; 
        }
        long long cnt1 = 0;
        long long cnt2 = 0;
        for(int i = 0;i<b;i++){
            if(ar[i] == 2){
                cnt1++;
            }
            if(ar[i] > 2){
                cnt2++;
            }
        }
        long long ans = (cnt2*(cnt2-1))/2; 
        long long d = cnt1*cnt2;
        long long e = d + ans;
        cout<<e<<endl;
    }    
    return 0;
}