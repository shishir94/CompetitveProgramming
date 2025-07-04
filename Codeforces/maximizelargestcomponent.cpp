#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
public:
    vector<int> parent, rank, size;
    DisjointSet(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = find(parent[node]);
    }

    void unionRank(int u, int v)
    {
        int p1 = find(u), p2 = find(v);
        if (p1 == p2)
            return;
        if (rank[p1] > rank[p2])
        {
            parent[p2] = p1;
            size[p1] += size[p2];
        }

        else if (rank[p1] < rank[p2])
        {
            parent[p1] = p2;
            size[p2] += size[p1];
        }
        else
        {
            parent[p2] = p1;
            size[p1] += size[p2];
            rank[p1]++;
        }
    }

    int getsize(int u)
    {
        return size[find(u)];
    }
};

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;

                v[i][j] = x;
            }
        }

        DisjointSet dsu(n * m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '#')
                {
                    int x = m * i + j;

                    for (int k = 0; k < 4; k++)
                    {
                        int nx = i + dx[k], ny = j + dy[k];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] == '#')
                        {
                            int xx = m * nx + ny;
                            dsu.unionRank(x, xx);
                        }
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '#')
                {
                    ans = max(ans, dsu.getsize(m * i + j));
                }
            }
        }

        
        // check to change every row.
        for(int i=0;i<n;i++){
            // loop throuh columns.
            set<int>st;
            int count = 0;
            int temp = 0;
            for(int j=0;j<m;j++){
                if(v[i][j] == '.'){
                    count++;
                    if(i-1>= 0 && v[i-1][j] == '#') st.insert(dsu.find(m*(i-1)+j));
                    if(i+1<n && v[i+1][j] == '#') st.insert(dsu.find(m*(i+1)+j));
                }
                else{
                    st.insert(dsu.find(m*(i)+j));
                }
            }

            for(auto itr=st.begin();itr!=st.end();itr++){
                count += dsu.getsize(*itr);
            }

            ans = max(ans,count);
        }

        // check to change every column.
        for(int j=0;j<m;j++){
            // loop throuh rows.
            set<int>st;
            int count = 0;
            int temp = 0;
            for(int i=0;i<n;i++){
                if(v[i][j] == '.'){
                    count++;
                    if(j-1>= 0 && v[i][j-1] == '#') st.insert(dsu.find(m*(i)+(j-1)));
                    if(j+1<m && v[i][j+1] == '#') st.insert(dsu.find(m*(i)+(j+1)));
                }
                else{
                    st.insert(dsu.find(m*(i)+j));
                }
            }

            for(auto itr=st.begin();itr!=st.end();itr++){
                count += dsu.getsize(*itr);
            }

            ans = max(ans,count);
        }

        cout<<ans<<endl;

    }
    return 0;
}