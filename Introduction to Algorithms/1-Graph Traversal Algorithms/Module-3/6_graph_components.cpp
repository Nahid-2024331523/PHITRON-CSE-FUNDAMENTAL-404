#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visit[1005];
void dfs(int src)
{
    cout<<src<<" ";
    visit[src]=true;
    for(int child : adj_list[src]){
        if(!visit[child]){
            dfs(child);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    int count=0;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    for(int i=0 ; i<n ; i++){
        if(visit[i]==false){
            count++;
            dfs(i);
            cout<<endl;
        }
    }
    cout<<"components -> "<<count;
    return 0;
}