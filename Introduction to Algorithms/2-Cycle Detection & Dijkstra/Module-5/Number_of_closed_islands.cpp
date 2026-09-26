#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int r, c;
    int count = 0;
    bool flag;

    vector<pair<int, int>> d = {
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1}
    };

    bool visit[105][105];

    bool valid(int i, int j) {
        if (i < 0 || i >= r || j < 0 || j >= c) {
            return false;
        }
        return true;
    }

    void dfs(int sr, int sc, vector<vector<int>>& grid) {
        visit[sr][sc] = true;

        for (int i = 0; i < 4; i++) {
            int cr = sr + d[i].first;
            int cc = sc + d[i].second;

            // If we go outside the grid,
            // this island touches the boundary.
            if (!valid(cr, cc)) {
                flag = false;
            }

            // Continue DFS for unvisited land cells (0)
            if (valid(cr, cc) &&
                !visit[cr][cc] &&
                grid[cr][cc] == 0) {
                
                dfs(cr, cc, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();

        memset(visit, false, sizeof(visit));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (!visit[i][j] && grid[i][j] == 0) {

                    // Assume the island is closed
                    flag = true;

                    dfs(i, j, grid);

                    if (flag == true) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

int main() {
    int r, c;

    cin >> r >> c;

    vector<vector<int>> grid(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid[i][j];
        }
    }

    Solution obj;

    cout << obj.closedIsland(grid) << endl;

    return 0;
}