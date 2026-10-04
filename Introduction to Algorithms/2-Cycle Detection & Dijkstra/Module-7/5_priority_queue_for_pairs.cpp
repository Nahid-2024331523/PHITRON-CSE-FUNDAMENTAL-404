#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
    pq.push({10,3});
    pq.push({5,6});
    cout<<pq.top().first<<" "<<pq.top().second;
    return 0;
}