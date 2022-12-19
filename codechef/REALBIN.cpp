#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    long long b,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        while(c %2 == 0){
            c = c/2;  
        } 
        if(c == 1){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        
    }
    return 0;
}