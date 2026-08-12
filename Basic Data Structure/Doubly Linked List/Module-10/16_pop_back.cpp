#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l{1,2,3,4,5};
    l.pop_back();
    for(auto it : l){
        cout<<it<<" ";
    }
}