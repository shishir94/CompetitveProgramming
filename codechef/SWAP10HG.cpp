#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        int ar1[b];
        int ar2[b];
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0;i<b;i++){
            cin>>ar1[i];
            if(ar1[i] == 1){
                cnt1++;
            }
        }
        for(int i = 0;i < b;i++){
            cin>>ar2[i];
             if(ar2[i] == 1){
                cnt2++;
            }
        }
        if(cnt1 != cnt2){
            cout<<"No"<<endl;
        }else {
            
        }  
    }
    return 0;
}