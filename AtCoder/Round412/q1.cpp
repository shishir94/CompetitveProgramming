#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int cnt = 0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(y>x) cnt++;
        }
        cout<<cnt<<endl;
    return 0;
}