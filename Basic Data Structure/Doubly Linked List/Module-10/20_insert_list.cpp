#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={1,2,3,4,5};
    list<int> L={10,20};
    l.insert(next(l.begin(),3),L.begin(),L.end());
    for(auto it : l){
        cout<<it<<" ";
    }
}