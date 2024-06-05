#include <iostream>
#include <bits/stdc++.h>
using namespace std;


map<vector<int>,int>row_a;
map<vector<int>,int>col_a;
map<vector<int>,int>row_b;
map<vector<int>,int>col_b;

string solve(int a)
{
    for(auto itr = row_a.begin();itr!=row_a.end();itr++)
    {
        vector<int>x = itr->first;
        int count = row_b[x];
        if(count != itr->second)
        {
            return "NO";
        }
    }

    for(auto itr = col_a.begin();itr!=col_a.end();itr++)
    {
        vector<int>x = itr->first;
        int count = col_b[x];
        if(count != itr->second)
        {
            return "NO";
        }
    }

    return "YES";
}


vector<vector<int>> transpose(vector<vector<int>> a)
{
  int n = a.size();
  int m = a[0].size();
  vector<vector<int>> res(m, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++) 
    {
      res[j][i] = a[i][j];
    }
  }
  return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        vector<vector<int>>b(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                cin>>b[i][j];
            }
        }
        
        
        for(int i=0;i<n;i++){
            vector<int>x = a[i];
            vector<int>l = b[i];

            sort(x.begin(),x.end());
            sort(l.begin(),l.end());

            row_a[x]++;
            row_b[l]++;
        }

        vector<vector<int>>new_a = transpose(a);
        vector<vector<int>>new_b = transpose(b);

        // for(int i=0;i<new_a.size();i++)
        // {
        //     for(int j=0;j<new_a[0].size();j++)
        //     {
        //         cout<<new_a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for(int i=0;i<new_a.size();i++){
            vector<int>x = new_a[i];
            vector<int>l = new_b[i];

            sort(x.begin(),x.end());
            sort(l.begin(),l.end());

            col_a[x]++;
            col_b[l]++;
        }

        cout<<solve(1)<<endl;
        row_a.clear();
        row_b.clear();
        col_a.clear();
        col_b.clear();
    }
    return 0;
}