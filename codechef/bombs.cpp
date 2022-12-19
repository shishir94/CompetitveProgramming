#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        string c;
        cin>>c;
        int cnt = 0;
        int cnt1 = 0;
        for(int i = 0;i<b;i++){
            if(c[i] == '0'){
                cnt++;
            }
        }
        for(int i = 0;i<b-1;i++){
            if(c[i]=='0' && c[i+1]=='1'){
                cnt1++;
            }else if(c[i] == '1' && c[i+1] == '0'){
                cnt1++;
                i++;
            }
        }
        cout<<cnt-cnt1<<endl;
    }
    return 0;
}
