#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int r, c;
        cin >> r >> c;

        vector<vector<char>> map(r, vector<char>(c));
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                cin >> map[i][j];

        int dx[4] = {-1, 0, 0, 1};
        int dy[4] = {0, -1, 1, 0};

        deque<tuple<int, int, int>> dq; 
        vector<vector<int>> dist(r, vector<int>(c, INT_MAX));

        dist[0][0] = 0;
        dq.push_front({0, 0, 0});

        while(!dq.empty()){
            auto [d1, x, y] = dq.front();
            dq.pop_front();

            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx >= 0 && nx < r && ny >= 0 && ny < c){
                    int new_dist = d1 + (map[x][y] != map[nx][ny]);

                    if(new_dist < dist[nx][ny]){
                        dist[nx][ny] = new_dist;
                        if(map[x][y] == map[nx][ny])
                            dq.push_front({new_dist, nx, ny});
                        else
                            dq.push_back({new_dist, nx, ny});
                    }
                }
            }
        }

        if(dist[r-1][c-1] == INT_MAX) cout << -1 << "\n";
        else cout << dist[r-1][c-1] << "\n";
    }

    return 0;
}
