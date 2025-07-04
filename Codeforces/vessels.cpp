#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<long long> a(n);
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    int q;
    cin>>q;
    set<long long>s;
    for(long long i=0; i<n; i++) {
        s.insert(i);
    }

    vector<long long> water_contains(n, 0);
    while(q--){
        int x;
        cin>>x;
        if(x == 1){
            long long pi,xi;
            cin>>pi>>xi;
            
            pi--; 
            while(xi >0 && !s.empty()) {
                auto it = s.lower_bound(pi);
                if(it == s.end()) break; 
                int index = *it;
                long long water_to_fill = min(xi, a[index] - water_contains[index]);
                water_contains[index] += water_to_fill; 
                xi -= water_to_fill; 
                if(water_contains[index] == a[index]) {
                    s.erase(it); 
                }
            }
        }
        else{
            int k;
            cin>>k;
            k--;
            cout<<water_contains[k] << endl; 
        }
    }
    return 0;
}