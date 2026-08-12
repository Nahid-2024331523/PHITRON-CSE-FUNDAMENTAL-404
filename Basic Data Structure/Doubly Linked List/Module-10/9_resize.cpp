#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    list<int> l(a,a+8);
    l.resize(5);
    cout<<l.size()<<endl;
    for(auto it : l){
        cout<<it<<" ";
    }
}