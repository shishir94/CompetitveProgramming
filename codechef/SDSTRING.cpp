#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    string b;
    for(int i = 0 ; i<a;i++){
        cin>>b;
        int cnt1 = 0;
        int cnt2 = 0;
        int s = b.size();
        if( s % 2 != 0){
            cout<<"-1"<<endl;
        }else{
            for(int i = 0;i<s;i++){
                if(b[i] == '1'){
                    cnt1++;
                }else{
                    cnt2++;
                }
            }
            if(cnt1 == 0 || cnt2 == 0){
                cout<<"-1"<<endl;
            }else{
                int d = (abs(cnt2-cnt1)/2);
                cout<<d<<endl;
            }
        }                
    }
    return 0;
}