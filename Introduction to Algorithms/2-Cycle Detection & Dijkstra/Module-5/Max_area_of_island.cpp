#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int r, c;
    int count, mx = 0;

    bool visit[55][55];

    vector<pair<int, int>> d = {{-1, 0},{1, 0},{0, -1},{0, 1}};

    bool valid(int i, int j)
    {
        if (i < 0 || i >= r || j < 0 || j >= c)
        {
            return false;
        }

        return true;
    }

    void dfs(int sr, int sc, vector<vector<int>>& grid)
    {
        visit[sr][sc] = true;
        count++;

        for (int i = 0; i < 4; i++)
        {
            int cr = sr + d[i].first;
            int cc = sc + d[i].second;

            if (valid(cr, cc) &&
                !visit[cr][cc] &&
                grid[cr][cc] == 1)
            {
                dfs(cr, cc, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        r = grid.size();
        c = grid[0].size();

        memset(visit, false, sizeof(visit));

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (!visit[i][j] && grid[i][j] == 1)
                {
                    count = 0;

                    dfs(i, j, grid);

                    mx = max(mx, count);
                }
            }
        }

        return mx;
    }
};

int main()
{
    int r, c;

    cin >> r >> c;

    vector<vector<int>> grid(r, vector<int>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }

    Solution obj;

    cout << obj.maxAreaOfIsland(grid) << endl;

    return 0;
}