#include <bits/stdc++.h>

using namespace std;

int T , n , QN;
int main() {

    cin>>T;
    while (T--) {
        int n;
        cin>>n;
        int la = 0, lb = 0, alln = 0, known = 1;
        for (int j = 1; j <= n; j++) {
            int a, b,cmd;
            cin>>cmd>>a>>b;


            if (a == b) {
                puts("YES");
                known = 1;
            }

            else if(cmd == 1) {
                puts("YES");
                known = 1;
            }
            else if(!known){
                puts("NO");
            }
            else if (min(a, b) < max(la, lb)) {
                puts("YES");
                known = 1;

            }
            else {
                puts("NO");
                known = 0;
            }
            la = a;
            lb = b;

        }

    }
}