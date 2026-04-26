class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>> grid(n, vector<int>(m, 0));
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

        queue<pair<int,int>> q;
        for (auto& s : sources) {
            int r = s[0];
            int c = s[1];
            int color = s[2];
            dist[r][c] = 0;
            grid[r][c] = max(grid[r][c], color);
            q.push({r,c});
        }
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        while (!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

                int newDist = dist[x][y] + 1;

                if (newDist < dist[nx][ny]) {
                    dist[nx][ny] = newDist;
                    grid[nx][ny] = grid[x][y];
                    q.push({nx, ny});
                } else if (newDist == dist[nx][ny]) {
                    grid[nx][ny] = max(grid[nx][ny], grid[x][y]);
                }
            }
        }
        return grid;
    }
};