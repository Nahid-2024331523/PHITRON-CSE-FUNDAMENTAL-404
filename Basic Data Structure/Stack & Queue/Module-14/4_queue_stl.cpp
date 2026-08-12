#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n; cin>>n;
    int i;
    for(i=0 ; i<n ; i++){
        int v; cin>>v;
        q.push(v);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}