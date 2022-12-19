#include<iostream>
using namespace std;

int main(){
    int a,b;
    string c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        cin>>c;
        long long d = 0;
        int cnt = 0;
        for(int i = 0;i<b;i++){
            if(c[i] == '1'){
                cnt++;
            }  
        }
        if(cnt%2 == 0){
             d = d + cnt/2;
             d = d * (cnt+1);
             cout<<d<<endl;
        }else{
            d = (cnt+1)/2+d;
            d = d*(cnt);
            cout<<d<<endl;
        }
    }
    return 0;
}