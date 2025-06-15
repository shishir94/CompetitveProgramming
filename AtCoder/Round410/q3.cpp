#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        v[i] = i + 1; 
    }

    long long start = 0;  
    while (m--) {
        long long type;
        cin >> type;

        if (type == 1) {
            long long p, x;
            cin >> p >> x;
            
            long long idx = (start + p - 1) % n;
            v[idx] = x;
        }
        else if (type == 2) {
            long long p;
            cin >> p;
            long long idx = (start + p - 1) % n;
            cout << v[idx] << '\n';
        }
        else if (type == 3) {
            long long k;
            cin >> k;
            start = (start + k) % n;  
        }
    }

    return 0;
}
