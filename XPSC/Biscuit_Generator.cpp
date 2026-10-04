#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    while(c>=a){
        ans+=b;
        c-=a;
    }
    cout<<ans;
    return 0;
}