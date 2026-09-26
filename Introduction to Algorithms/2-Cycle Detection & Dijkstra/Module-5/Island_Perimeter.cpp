#include <bits/stdc++.h>
using namespace std;

int countPerimeter;
int r, c;

bool visit[105][105];

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j)
{
    if(i < 0 || i >= r || j < 0 || j >= c)
    {
        return false;
    }
    return true;
}

void dfs(int sr, int sc, vector<vector<int>>& grid)
{
    visit[sr][sc] = true;
    for(int i = 0; i < 4; i++)
    {
        int cr = sr + d[i].first;
        int cc = sc + d[i].second;
        // Outside the grid
        if(!valid(cr, cc))
        {
            countPerimeter++;
        }
        // Water
        else if(!visit[cr][cc] && grid[cr][cc] == 0)
        {
            countPerimeter++;
        }
        // Unvisited land
        else if(!visit[cr][cc] && grid[cr][cc] == 1)
        {
            dfs(cr, cc, grid);
        }
    }
}

int main()
{
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c));
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }
    countPerimeter = 0;
    memset(visit, false, sizeof(visit));
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(!visit[i][j] && grid[i][j] == 1)
            {
                dfs(i, j, grid);
            }
        }
    }
    cout << countPerimeter << endl;
    return 0;
}