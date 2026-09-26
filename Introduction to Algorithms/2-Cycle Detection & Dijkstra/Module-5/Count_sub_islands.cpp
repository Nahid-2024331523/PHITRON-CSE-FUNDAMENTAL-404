#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int r, c;
    bool visit[505][505];

    vector<pair<int, int>> d = {{-1, 0},{1, 0},{0, -1},{0, 1}};

    bool valid(int i, int j) {
        if (i < 0 || i >= r || j < 0 || j >= c) {
            return false;
        }
        return true;
    }

    bool flag;
    int count = 0;

    void dfs(int sr, int sc,
             vector<vector<int>>& grid1,
             vector<vector<int>>& grid2) {

        visit[sr][sc] = true;

        // If this cell is land in grid2 but water in grid1,
        // then this island is NOT a sub-island.
        if (grid1[sr][sc] != 1) {
            flag = false;
        }

        for (int i = 0; i < 4; i++) {
            int cr = sr + d[i].first;
            int cc = sc + d[i].second;

            if (valid(cr, cc) &&
                !visit[cr][cc] &&
                grid2[cr][cc] == 1) {

                dfs(cr, cc, grid1, grid2);
            }
        }
    }

    int countSubIslands(vector<vector<int>>& grid1,vector<vector<int>>& grid2)
    {
        r = grid1.size();
        c = grid1[0].size();

        // Initialize visited array
        memset(visit, false, sizeof(visit));

        count = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (!visit[i][j] && grid2[i][j] == 1) {

                    flag = true;

                    dfs(i, j, grid1, grid2);

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

    vector<vector<int>> grid1(r, vector<int>(c));
    vector<vector<int>> grid2(r, vector<int>(c));

    // Input grid1
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid1[i][j];
        }
    }

    // Input grid2
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid2[i][j];
        }
    }

    Solution obj;

    cout << obj.countSubIslands(grid1, grid2) << endl;

    return 0;
}