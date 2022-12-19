#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i = 0;i<a;i++){
        string b;
        cin>>b;
        int c = b.size();
        int ans = 0;
        for(int i = 0;i<c;i++){
            if(b[i] != '4' && b[i] != '7'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
