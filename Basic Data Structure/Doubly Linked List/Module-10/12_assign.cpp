#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l{1,2,3,4,5};
    list<int> L;
    L=l;
    for(auto it : L){
        cout<<it<<" ";
    }
}