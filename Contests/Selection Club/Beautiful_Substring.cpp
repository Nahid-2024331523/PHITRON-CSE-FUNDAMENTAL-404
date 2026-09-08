#include<bits/stdc++.h>
using namespace std;
int sub_string( string s , int n)
{
    int count=0;
    int i;
    for(i=0 ; i<n-2 ; i++){
        if((s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') || (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')){
            count++;
        }
    }
    return count;
}
int main()
{
    int num; cin>>num;
    string s; cin>>s;
    int n=s.size();
    cout<<sub_string(s,n);
    return 0;
}