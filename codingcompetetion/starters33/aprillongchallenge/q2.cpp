#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x == 1){
        if(y >= 4){
            cout<<"2 "<<"4"<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }else{
        if(x % 2 == 0){
            if(x+2 <= y){
                cout<<x<<" "<<x+2<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }else{
            if(x % 3 == 0){
                if(x+3 <= y){
                    cout<<x<<" "<<x+3<<endl;
                }else{
                    cout<<"-1"<<endl;
                }
            }else{
                if(x+3<=y){
                    cout<<x+1<<" "<<x+3<<endl;
                }else{
                    cout<<"-1"<<endl;
                }
            }
        }
    }
}
return 0;
}