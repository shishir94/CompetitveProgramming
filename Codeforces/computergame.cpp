#include <iostream>
#include <vector>
using namespace std;

long long modular_power(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res % p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1;
        string s2;
        cin>>s1>>s2;
        bool p = true;
        for(int i=0;i<n;i++){
            if(s1[i] == '1' && s2[i] == '1'){
                // cout<<"NO"<<endl;
                p=false;
                break;

            }
        }
        if(p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
