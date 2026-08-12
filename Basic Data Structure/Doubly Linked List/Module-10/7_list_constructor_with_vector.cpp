#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    list<int> l(v.begin(),v.end());
    for(auto it : l){
        cout<<it<<" ";
    }
}