class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;

        int n = grid.size();
        int m = grid[0].size();
        // cerr << n << m << '\n';
        int fresh = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 2) {
                    q.push({j, i});
                } else if (grid[i][j] == 1) {
                    ++fresh;
                }
            }
        }

        if (fresh == 0) return 0;
        if (q.empty()) return -1;

        // j is x, i is y
        // x is first in pair
        int c = 0;
        while (!q.empty()) {
            int curr = q.size();
            for (int i = 0; i < curr; ++i) {
                auto [x, y] = q.front();
                // cerr << x << y << '\n';
                q.pop();

                if (y - 1 >= 0 && grid[y - 1][x] == 1) {
                    q.push({x, y - 1});
                    grid[y - 1][x] = 2;
                    --fresh;
                }
                if (y + 1 < n && grid[y + 1][x] == 1) {
                    q.push({x, y + 1});
                    grid[y + 1][x] = 2;
                    --fresh;
                }
                if (x - 1 >= 0 && grid[y][x - 1] == 1) {
                    q.push({x - 1, y});
                    grid[y][x - 1] = 2;
                    --fresh;
                }
                if (x + 1 < m && grid[y][x + 1] == 1) {
                    q.push({x + 1, y});
                    grid[y][x + 1] = 2;
                    --fresh;
                } 
            }
            c++;
            // cerr << "Thing" << c << '\n';
        }

        if (fresh != 0) {
            return -1;
        }
        return c - 1;
    }
};
