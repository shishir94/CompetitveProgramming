#include <bits/stdc++.h>
using namespace std;

void merge(vector<pair<long long, long long>>& v, long long low, long long mid, long long high, vector<long long>& count) {
    vector<pair<long long, long long>> temp(high - low + 1);

    long long i = low, j = mid + 1;
    long long ind = 0;

    while (i <= mid && j <= high) {
        if (v[i].first <= v[j].first) {
            temp[ind++] = v[i++];
        } else {
            count[v[j].second] += (mid - i + 1);
            temp[ind++] = v[j++];
        }
    }

    while (i <= mid) {
        temp[ind++] = v[i++];
    }

    while (j <= high) {
        temp[ind++] = v[j++];
    }

    for (int k = 0; k < temp.size(); k++) {
        v[low + k] = temp[k];
    }

}

void mergeSort(vector<pair<long long, long long>>& v, long long low, long long high, vector<long long>& count) {
    if (low >= high) return;

    long long mid = (low + high) / 2;
    mergeSort(v, low, mid, count);
    mergeSort(v, mid + 1, high, count);

    merge(v, low, mid, high, count);
}


void merge1(vector<long long>& count,vector<pair<long long,long long>>&v,long long left,long long mid,long long right){
    vector<pair<int,int>>temp(right-left+1);
    int i=left,j=mid+1,k=0;

    while(i<= mid && j<=right){
        if(v[i].first <= v[j].first){
            temp[k++]=v[j++];
        }
        else{
            count[v[i].second]+= (right-j+1);
            temp[k++] = v[i++];
        }
    }
    while(i<= mid){
        temp[k++] = v[i++];
    }

    while(j<= right){
        temp[k++] = v[j++];
    }

    for(int i=left;i<=right;i++){
        v[i] = temp[i-left];
    }
}
void mergeSort1(vector<long long>& count,vector<pair<long long,long long>>& v,long long left,long long right){
    if(left <right){
        long long mid = (left+right)/2;
        mergeSort1(count,v,left,mid);
        mergeSort1(count,v,mid+1,right);
        merge1(count,v,left,mid,right);
    }
}

bool compare(pair<pair<long long, long long>,long long> &a , pair<pair<long long, long long>,long long>& b){
    return a.first.first == b.first.first ? a.first.second > b.first.second : a.first.first < b.first.first;
}

int main() {
    long long n;
    cin >> n;

    vector<pair<pair<long long, long long>,long long>> v(n);
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v[i] = {{a, b},i};
    }

    sort(v.begin(), v.end(),compare);

    vector<pair<long long, long long>> p, q;

    for (int i = 0; i < n; i++) p.push_back({v[i].first.second, v[i].second});   
    for(int i=0;i<n;i++) q.push_back({v[i].first.second,v[i].second});

    vector<long long> count1(n, 0), count2(n, 0);

   
    unordered_map<long long,long long>mp,mp1;
    for(int i=0;i<n;i++){
        if(mp.find(p[i].first) != mp.end()) count1[p[i].second] += mp[p[i].first];
        mp[p[i].first]++;
    }

    for(int i=n-1;i>=0;i--){
        if(mp1.find(q[i].first) != mp1.end()) count2[q[i].second] += mp1[q[i].first];
        mp1[q[i].first]++;
    }


    mergeSort(p, 0, n - 1, count1);
    mergeSort1(count2,q,0,n-1);
    for (int i = 0; i < n; i++) cout << count2[i] << " ";
    cout << endl;


    for (int i = 0; i < n; i++) cout << count1[i] << " ";
    cout << endl;

    return 0;
}
