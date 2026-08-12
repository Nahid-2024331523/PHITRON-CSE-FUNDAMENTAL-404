#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,6,5,4,7,8};
    list<int> l(a,a+8);
    for(auto it : l){
        cout<<it<<" ";
    }
}