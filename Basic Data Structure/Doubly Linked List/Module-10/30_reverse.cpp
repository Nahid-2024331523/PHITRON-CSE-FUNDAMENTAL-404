#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l{1,2,3,2,4,2,5,7,1,2,9,12,2,54,14,2,9};
    l.reverse();
    for(auto it : l){
        cout<<it<<" ";
    }
}