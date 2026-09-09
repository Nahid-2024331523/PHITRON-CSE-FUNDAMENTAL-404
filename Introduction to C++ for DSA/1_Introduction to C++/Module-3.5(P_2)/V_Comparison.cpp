#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    char c;
    cin>>n>>c>>m;
    if(c=='>'){
        if(n-m>0){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    if(c=='<'){
        if(n-m<0){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    if(c=='='){
        if(n==m){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    return 0;
}