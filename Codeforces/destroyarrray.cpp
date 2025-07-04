#include<bits/stdc++.h>
using namespace std;    

class DisjointSet {
public:
    vector<long long> parent, rank;
    DisjointSet(long long n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (long long i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    long long find(long long a) {
        if(parent[a] == a) return a;
        return parent[a] = find(parent[a]); 
    }

    void unionSets(long long a, long long b) {
        long long rootA = find(a);
        long long rootB = find(b);
        if (rootA != rootB) {
            if (rank[rootA] < rank[rootB]) {
                parent[rootA] = rootB;
            } else if (rank[rootA] > rank[rootB]) {
                parent[rootB] = rootA;
            } else {
                parent[rootB] = rootA;
                rank[rootA]++;
            }
        }
    }
};
int main(){
    long long n;
    cin>>n;


    vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<long long>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<long long>c(n,-1);
    vector<int>ans(n);

    unordered_map<long long, long long> mp;

    long long max_sum = 0;
    for(int i=n-1;i>=0;i--){
        ans[i] = max_sum;
        c[i] = 1;

        
    }
    return 0;
}