#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n,m; cin>>n>>m;
    int i;
    for(i=0 ; i<n ; i++){
        int v; cin>>v;
        s.push(v);
    }
    queue<int> q;
    for(i=0 ; i<m ; i++){
        int v; cin>>v;
        q.push(v);
    }
    int a,b;
    int flag=1;
    while(!s.empty() && !q.empty()){
        a=s.top();
        b=q.front();
        s.pop();
        q.pop();
        if(a!=b){
            flag=0;
            break;
        }
        else if(s.empty()==true && q.empty()==false){
            flag=0;
            break;
        }
        else if(q.empty()==true && s.empty()==false){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}