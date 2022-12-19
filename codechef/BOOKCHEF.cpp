#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
void display(vector<pair<int,string>>& v){      // this will display vector
    cout<<"Displaying this vector "<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
        //cout<<v.at(i)<<" ";
    }
   // cout<<endl;
}
void display(vector<int>& v){      // this will display vector
    cout<<"Displaying this vector "<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
   // cout<<endl;
}
*/
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long n ,m;
    cin>>n>>m;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long f[m];
    long long p[m];
    string s[m];
    for(int i = 0;i<m;i++){
        cin>>f[i]>>p[i]>>s[i];
    }
    vector<int>h;
    for(int i = 0;i<n;i++){
        h.push_back(arr[i]);
    }
    for(int i = 0;i<m;i++){
        h.push_back(f[i]);
    }
 //   display(h);
   // cout<<endl;

    map<int,int>mp;
    for(int i = 0;i<h.size();i++){
        int key = h[i];
        mp[key]++;
    }
    vector<pair<int,string>>v;
    vector<pair<int,string>>c;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
        if(itr->second ==2){
            v.push_back(make_pair(p[itr->first-1],s[itr->first-1]));
        }else{
            c.push_back(make_pair(p[itr->first-1],s[itr->first-1]));
        }
    }
    sort(v.begin(),v.end());
    sort(c.begin(),c.end());
    /*
    display(v);
    cout<<endl;

    display(c);
    cout<<endl;
    */
    for(int i = v.size()-1;i>=0;i--){
        cout<<v[i].second<<endl;
    }
    for(int i = c.size()-1;i>=0;i--){
        cout<<c[i].second<<endl;
    }
return 0;
}