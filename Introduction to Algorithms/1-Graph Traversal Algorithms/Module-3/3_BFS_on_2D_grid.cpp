#include<bits/stdc++.h>
using namespace std;
int r,c;
char grid[105][105];
bool visit[105][105];
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i , int j)
{
    if(i<0 || i>=r || j<0 || j>=c){
        return false;
    }
    return true;
}
void bfs(int sr , int sc)
{
    queue<pair<int,int>> q;
    q.push({sr,sc});
    visit[sr][sc]=true;
    while(!q.empty()){
        pair<int,int> par=q.front();
        q.pop();
        int par_r=par.first;
        int par_c=par.second;
        cout<<par_r<<" "<<par_c<<endl;
        for(int i=0 ; i<4 ; i++){
            int cr=par_r+d[i].first;
            int cc=par_c+d[i].second;
            if(valid(cr,cc) && !visit[cr][cc]){
                q.push({cr,cc});
                visit[cr][cc]=true;   
            }   
        }
    }
}
int main()
{
    cin>>r>>c;
    int i,j;
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            cin>>grid[i][j];
        }
    }
    int sr,sc;
    cin>>sr>>sc;
    memset(visit,false,sizeof(visit));
    bfs(sr,sc);
    return 0;
}