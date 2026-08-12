#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={1,2,3,4,5};
    vector<int> v={10,20};
    l.insert(next(l.begin(),3),v.begin(),v.end());
    for(auto it : l){
        cout<<it<<" ";
    }
}