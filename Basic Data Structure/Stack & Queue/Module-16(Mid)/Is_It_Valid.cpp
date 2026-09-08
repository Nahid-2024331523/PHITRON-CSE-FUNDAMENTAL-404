#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        string st;
        cin>>st;
        stack<char> s;
        int zero=0,one=0;
        for(char c : st){
            if(c=='0'){
                s.push(c);
                zero++;
            }
            else{
                s.push(c);
                one++;
            }
        }
        if(zero==one){
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}