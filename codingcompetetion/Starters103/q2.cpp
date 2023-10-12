#include <iostream>
#include <string>
#include <climits>
using namespace std;

long long modular_power(long long x, long long y, long long p) {
    long long res = 1;
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
        long long n;
        string num;
        cin >> n >> num;

        if (n == 1) {
            if(stoi(num) %8 == 0){
                cout<<num<<endl;
            }
            else{
                cout<<8<<endl;
            }
        } 
        else if (n == 2) {
            long long h = stoi(num);
            if (h % 8 == 0) {
                cout << num << endl;
            } else {
                long long ans = 0;
                long long vv = INT_MAX;
                for (int i = 10; i <= 99; i++) {
                    if (i % 8 == 0) {
                        string fi = to_string(i);
                        int cntl = 0;
                        for (int j = 0; j < fi.size(); j++) {
                            if (fi[j] != num[j]) {
                                cntl++;
                            }
                        }

                        if (vv >= cntl) {
                            vv = cntl;
                            ans = i;
                        }
                    }
                }
                cout << to_string(ans) << endl;
            }
        } 
        else if (n == 3) {
            if(stoi(num)%8 == 0){
                cout<<num<<endl;
            }else{
                int diff = INT_MAX;
                long long ans = 0;
                for (int i = 100; i <= 999; i++) {
                    if (i % 8 == 0) {
                        string g = to_string(i);
                        int cntl = 0;
                        for (int j = 0; j < g.size(); j++) {
                            if (num[j] != g[j]) {
                                cntl++;
                            }
                        }
                        if (cntl <= diff) {
                            diff = cntl;
                            ans = i;
                        }
                    }
                }
                cout << to_string(ans) << endl;
            }
        } 
        else {
            string ans = "";
            int aw = INT_MAX;
            string ww = num.substr(n-3);
            if (stoi(ww) % 8 == 0) {
                cout << num << endl;
            } else {
                for(int i=0;i<=999;i++){
                    if(i%8 == 0){
                        int cnt =0;
                        string f = to_string(i);
                        if(f.size() == 1){
                            f = "00"+f;
                        }
                        else if(f.size() == 2){
                            f = "0"+f;
                        }
                        for(int j=0;j<f.size();j++){
                            if(f[j] != ww[j]){
                                cnt++;
                            }
                        }
                        if(cnt <= aw){
                            aw = cnt;
                            ans = f;
                        }
                    }
                }
                num[n - 3] = ans[0];
                num[n - 2] = ans[1];
                num[n - 1] = ans[2];
                cout << num << endl;
            }
        }
    }

    return 0;
}
