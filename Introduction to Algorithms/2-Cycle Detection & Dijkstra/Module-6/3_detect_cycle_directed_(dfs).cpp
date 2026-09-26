#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];

bool visit[105];

bool pathvisit[105];

bool cycle;

void dfs(int src)
{
    visit[src]=true;
    pathvisit[src]=true;
    for(int child : adj_list[src]){
        if(visit[child] && pathvisit[child]){
                cycle=true;
        }
        if(!visit[child]){
            dfs(child);
        }
    }
    pathvisit[src]=false;
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    memset(visit,false,sizeof(visit));
    memset(pathvisit,false,sizeof(pathvisit));
    for(int i=0 ; i<n ; i++){
        if(!visit[i]){
            dfs(i);
        }
    }
    if(cycle){
        cout<<"Cycle Detected"<<endl;
    }
    else{
        cout<<"No Cycle"<<endl;
    }
    return 0;
}