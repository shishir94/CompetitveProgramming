#include<iostream>
using namespace std;

int main(){
    int a;
    long long b ,c,d;
    cin>>a;
    for(int i = 0;i < a;i++){
        cin>>b>>c>>d;
        long long e = b/c;
        long long sum = 0;
        long long x ;
        if(b % c == 0){
            for(int i = 1 ;i*i <= d *e;i++){
                if(d*e % i == 0){
                    x = d*e/i;
                    if(x != i){
                        sum = sum + x + i;
                    }
                    else{
                        sum = sum + x;
                    }
                    if(sum > b){
                        break;
                    }
                }
            }
            if(sum == b){
                cout<<d*e<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}