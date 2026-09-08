#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool vis[1000];
int level[1000];
int parent[1000];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;

    while(!q.empty()){
        int par=q.front();
        q.pop();

        for(int child : adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
                parent[child]=par;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(level,-1,sizeof(level));
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    int src,dst;
    cin>>src>>dst;
    bfs(src);
    for(int i=0 ; i<n ; i++){
        cout<<i<<" -> "<<parent[i]<<endl;
    }
    cout<<level[dst]<<endl;
    int node=dst;
    vector<int> path;
    while(node!=-1){
        path.push_back(node);
        node=parent[node];
    }
    reverse(path.begin(),path.end());
    for(int i : path){
        cout<<i<<" ";
    }
    return 0;
}