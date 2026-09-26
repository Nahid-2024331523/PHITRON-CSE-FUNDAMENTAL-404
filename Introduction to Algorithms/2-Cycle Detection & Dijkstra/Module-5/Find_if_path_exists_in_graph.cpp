#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> adj_list[200001];
    bool visit[200001];

    void dfs(int src)
    {
        visit[src] = true;

        for(int child : adj_list[src])
        {
            if(!visit[child])
            {
                dfs(child);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
    {
        for(int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];

            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }

        memset(visit, false, sizeof(visit));

        dfs(source);

        return visit[destination];
    }
};

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> edges(e);

    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        edges[i] = {a, b};
    }

    int source, destination;
    cin >> source >> destination;

    Solution obj;

    if(obj.validPath(n, edges, source, destination))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}