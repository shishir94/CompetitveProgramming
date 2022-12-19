#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    string b;
    for(int i = 0;i<a;i++){
        cin>>b;
        int c = b.size();
        string ans = "";
        for(int i = 0 ; i<c;i++){
            ans += b[c-i-1];
            //cout<<ans;
        }
        int final = stoi(ans);
        cout<<final<<endl;
    }
    return 0;
}
    
