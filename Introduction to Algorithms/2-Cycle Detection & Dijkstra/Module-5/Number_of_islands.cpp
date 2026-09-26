#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int r, c;
    int count = 0;

    bool visit[305][305];

    vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

    bool valid(int i, int j)
    {
        if(i < 0 || i >= r || j < 0 || j >= c)
        {
            return false;
        }

        return true;
    }

    void dfs(int sr, int sc, vector<vector<char>>& grid)
    {
        visit[sr][sc] = true;

        for(int i = 0; i < 4; i++)
        {
            int cr = sr + d[i].first;
            int cc = sc + d[i].second;

            if(valid(cr, cc) &&
               !visit[cr][cc] &&
               grid[cr][cc] == '1')
            {
                dfs(cr, cc, grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid)
    {
        r = grid.size();
        c = grid[0].size();

        memset(visit, false, sizeof(visit));

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(!visit[i][j] && grid[i][j] == '1')
                {
                    count++;
                    dfs(i, j, grid);
                }
            }
        }

        return count;
    }
};

int main()
{
    int r, c;

    cin >> r >> c;

    vector<vector<char>> grid(r, vector<char>(c));

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }

    Solution obj;

    cout << obj.numIslands(grid) << endl;

    return 0;
}