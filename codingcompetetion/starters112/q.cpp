#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long modular_power(long long x , long long y , long long p) {
    long long res = 1;
    while(y>0) {
        if(y%2==1) {
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        vector<int> v;
        sort(arr, arr+n);
        multiset<int> mt;
        for(int i=1; i<n; i++) {
            mt.insert(arr[i]);
        }    
        v.push_back(arr[0]);
        int fi = arr[0];
        for(int i=1; i<n; i++) {
            auto l = mt.upper_bound(fi);
            if(l != mt.end()) {
                v.push_back(*l);
                mt.erase(l);
                fi = fi+*l;
            }
            else {
                break;
            }
        }

        if(!mt.empty()) {
            for(auto itr = mt.begin(); itr != mt.end(); itr++) {
                v.push_back(*itr);
            }
        }

        long long sum = v[0];
        int cnt = 0;
        for(int i=1; i<n; i++) {
            if(sum >= v[i]) {
                cnt++;
            }
            sum += v[i];
        }

        cout << cnt << endl;
        for(int i=0; i<n; i++) {
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
