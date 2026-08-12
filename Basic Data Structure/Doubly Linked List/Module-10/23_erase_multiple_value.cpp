#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l{1,2,3,4,5};
    l.erase(next(l.begin(),1),next(l.begin(),3));
    for(auto it : l){
        cout<<it<<" ";
    }
}