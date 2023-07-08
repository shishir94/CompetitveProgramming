#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
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
        long long n, m, h;
        cin >> n >> m >> h;
        priority_queue<pair<long long, pair<long long, long long>>> pq;
        vector<vector<long long>> v(n, vector<long long>(m));
        for(long long i= 0; i < n; i++) {
            for(long long j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
    
        for(long long i = 0; i < n; i++) {
            sort(v[i].begin(), v[i].end());
        }
    
        for(long long i = 0; i < n; i++) {
            long long time = 0;
            long long penalty = 0;
            long long points = 0;
            long long j = 0;
            while(j < m && time <= h) {
                time += v[i][j];
                if(time <= h) {
                    points++;
                    penalty += time;
                } 
                j++;
            }
            pq.push({points, {-penalty, -i}});
        }
    
        long long ans = 0;
        while(!pq.empty()) {
            long long top = pq.top().second.second;
            ans++;
            if(top == 0) {
                break;
            }
            pq.pop();
        }
        cout << ans << endl;
    }

    return 0;
}
