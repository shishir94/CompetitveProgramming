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
    if(x % 2 != 0 && y % 2 != 0 || x ==1||y ==1){
        cout<<"-1"<<endl;
    }else{
        if(x % 2 == 0 && y % 2 == 0){
            int t = y/2;
            int s = x/2;
            for(int i = 1;i<=t;i++){
                cout<<"b";
            }
            for(int i = 1;i<=x;i++){
                cout<<"a";
            }
            for(int i = 1;i<=t;i++){
                cout<<"b";
            }
            cout<<endl;
            for(int i = 1;i<=s;i++){
                cout<<"a";
            }
            for(int i = 1;i<=y;i++){
                cout<<"b";
            }
            for(int i = 1;i<=s;i++){
                cout<<"a";
            }
            cout<<endl;
        }else{
            if(x % 2 != 0){
                int d = y/2;
                for(int i = 1;i<=d;i++){
                    cout<<"b";
                }
                for(int i = 1;i<=x;i++){
                    cout<<"a";
                }
                for(int i = 1;i<=d;i++){
                    cout<<"b";
                }
                cout<<endl;
                int w = x/2;
                int h = y/2;
                for(int i = 1;i<=w;i++){
                    cout<<"a";
                }
                for(int i = 1;i <=h;i++){
                    cout<<"b";
                }
                cout<<"a";
                for(int i = 1;i<=h;i++){
                    cout<<"b";
                }
                for(int i =1;i<=w;i++){
                    cout<<"a";
                }
                cout<<endl;
            }else{
                int d = x/2;
                for(int i = 1;i<=d;i++){
                    cout<<"a";
                }
                for(int i = 1;i<=y;i++){
                    cout<<"b";
                }
                for(int i = 1;i<=d;i++){
                    cout<<"a";
                }
                cout<<endl;
                int w = x/2;
                int h = y/2;
                for(int i = 1;i<=h;i++){
                    cout<<"b";
                }
                for(int i = 1;i <=w;i++){
                    cout<<"a";
                }
                cout<<"b";
                for(int i = 1;i<=w;i++){
                    cout<<"a";
                }
                for(int i =1;i<=h;i++){
                    cout<<"b";
                }
                cout<<endl;
            }
        }
    }
}
return 0;
}