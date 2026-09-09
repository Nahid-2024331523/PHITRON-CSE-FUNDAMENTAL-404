#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        string target;
        cin>>target;
        size_t i=0;
        while((i=s.find(target,i)) != string::npos){
            s.replace(i,target.size(),"#");
            i++;
        }
        cout<<s<<endl;
    }
    return 0;
}