#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> adj_list[n];
    int i;
    for(i=0 ; i<n ; i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    for(i=0 ; i<n ; i++){
        cout<<i<<" -> ";
        for(int v : adj_list[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}