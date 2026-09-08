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
void dfs(int sr , int sc)
{
    cout<<sr<<" "<<sc<<endl;
    visit[sr][sc]=true;
    for(int i=0 ; i<4 ; i++){
        int cr,cc;
        cr=sr+d[i].first;
        cc=sc+d[i].second;
        if(valid(cr,cc)==true && !visit[cr][cc]){
            dfs(cr,cc);
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
    dfs(sr,sc);
    return 0;
}